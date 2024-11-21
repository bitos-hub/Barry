#include "pch.h"

#include "Service.h"
#include "Excepcion_existe_admin.h"
#include "PetIdNoFoundException.h"

using namespace System::IO;

void ServiceBarry::Service::cargarUsuarios()
{
	lista_usuarios = Service::ConsultarTodosUsuarios();
}

int ServiceBarry::Service::VerifyAdmin()
{
	for each (User ^ _usuario in lista_usuarios) {
		if (_usuario->Role == "Administrador") {
			return 1;
		}
	}
	return 0;
}


int ServiceBarry::Service::AddUsuario(User^ usuario)
{
	/*lista_usuarios->Add(usuario);
	int id = lista_usuarios->Count;
	lista_usuarios[id - 1]->Id = id;
	int id_mayor = 0;
	for (int i = 0; i < lista_usuarios->Count - 1; i++) {
		if (id_mayor < lista_usuarios[i]->Id) {
			id_mayor = lista_usuarios[i]->Id;
		}
	}
	if (lista_usuarios->Count > 1) {
		lista_usuarios[id - 1]->Id = id_mayor + 1;
	}
	Persistance::PersistBinaryFile(BIN_USER_FILE_NAME, lista_usuarios);
	Persistance::PersistTextFile(TXT_USER_FILE_NAME, lista_usuarios);*/
	return Persistance::AddUsuario(usuario);
}

int ServiceBarry::Service::ActualizarUsuario(User^ usuario)
{
	/*for (int i = 0; i < lista_usuarios->Count; i++) {
		if (lista_usuarios[i]->Id == usuario->Id) {
			lista_usuarios[i] = usuario;
			Persistance::PersistBinaryFile(BIN_USER_FILE_NAME, lista_usuarios);
			Persistance::PersistTextFile(TXT_USER_FILE_NAME, lista_usuarios);
			return;
		}
	}*/
	return Persistance::ActualizarUsuario(usuario);
}

int ServiceBarry::Service::EliminarUsuario(int id)
{
	/*
	for (int i = 0; i < lista_usuarios->Count; i++) {
		if (lista_usuarios[i]->Id == id) {
			lista_usuarios->RemoveAt(i);
			Persistance::PersistBinaryFile(BIN_USER_FILE_NAME, lista_usuarios);
			Persistance::PersistTextFile(TXT_USER_FILE_NAME, lista_usuarios);
			return;
		}
	}*/
	return Persistance::EliminarUsuario(id);
}

User^ ServiceBarry::Service::ConsultarUsuario(String^ UserName)
{
	for each (User ^ user in lista_usuarios) {
		if (user->Name == UserName) {
			return user;
		}
	}
	return nullptr;
}

List<User^>^ ServiceBarry::Service::ConsultarTodosUsuarios()
{
	/*try {

		lista_usuarios = (List<User^>^)Persistance::LoadBinaryFile(BIN_USER_FILE_NAME);
		if (lista_usuarios == nullptr)
			lista_usuarios = gcnew List<User^>();
	}
	catch (FileNotFoundException^ ex) {
	}*/

	return Persistance::ConsultarTodosUsuarios();
}

List<User^>^ ServiceBarry::Service::QueryUserByName(String^ Username)
{
	List<User^>^ usersList = ConsultarTodosUsuarios();
	List<User^>^ listToReturn = gcnew List<User^>();
	for (int i = 0; i < usersList->Count; i++) {
		if (usersList[i]->Name->Contains(Username))
			listToReturn->Add(usersList[i]);
	}
	return listToReturn;
}

int ServiceBarry::Service::AddPet(Pet^ pet)
{
	Persistance::PetsList->Add(pet);
	int id = Persistance::PetsList->Count;
	Persistance::PetsList[id - 1]->Id = id;
	int id_mayor = 0;
	for (int i = 0; i < Persistance::PetsList->Count - 1; i++) {
		if (id_mayor < Persistance::PetsList[i]->Id) {
			id_mayor = Persistance::PetsList[i]->Id;
		}
	}
	if (Persistance::PetsList->Count > 1) {
		Persistance::PetsList[id - 1]->Id = id_mayor + 1;
	}
	Persistance::PersistBinaryFile(Persistance::BIN_PET_FILE_NAME, Persistance::PetsList);
	Persistance::PersistTextFile(TXT_PET_FILE_NAME, Persistance::PetsList);
	Persistance::PersistXMLFile(Persistance::XML_PET_FILE_NAME, Persistance::PetsList);
	return id;
}

void ServiceBarry::Service::UpdatePet(Pet^ pet)
{
	List<double>^ weightEvolution= gcnew List<double>();
	List<DateTime>^ weightChanges = gcnew List<DateTime>();
	List<double>^ waterEvolution = gcnew List<double>();
	List<DateTime>^ waterChanges = gcnew List<DateTime>();
	List<double>^ foodEvolution = gcnew List<double>();
	List<DateTime>^ foodChanges = gcnew List<DateTime>();
	for (int i = 0; i < Persistance::PetsList->Count; i++) {
		if (Persistance::PetsList[i]->Id == pet->Id) {
			weightEvolution = Persistance::PetsList[i]->WeightEvolution;
			weightChanges = Persistance::PetsList[i]->WeightChanges;
			waterEvolution = Persistance::PetsList[i]->WaterEvolution;
			waterChanges = Persistance::PetsList[i]->WaterChanges;
			foodEvolution = Persistance::PetsList[i]->FoodEvolution;
			foodChanges = Persistance::PetsList[i]->FoodChanges;
			if (weightEvolution[weightEvolution->Count - 1] != pet->Weight) {
				weightEvolution->Add(pet->Weight);
				weightChanges->Add(DateTime::Now);
			}
			pet->WeightEvolution = weightEvolution;
			pet->WeightChanges = weightChanges;
			if (waterEvolution[waterEvolution->Count - 1] != pet->WaterServing) {
				waterEvolution->Add(pet->WaterServing);
				waterChanges->Add(DateTime::Now);
			}
			pet->WaterEvolution = waterEvolution;
			pet->WaterChanges = waterChanges;
			if (foodEvolution[foodEvolution->Count - 1] != pet->FoodServing) {
				foodEvolution->Add(pet->FoodServing);
				foodChanges->Add(DateTime::Now);
			}
			pet->FoodEvolution = foodEvolution;
			pet->FoodChanges = foodChanges;
			Persistance::PetsList[i] = pet;
			Persistance::PersistBinaryFile(Persistance::BIN_PET_FILE_NAME, Persistance::PetsList);
			Persistance::PersistTextFile(TXT_PET_FILE_NAME, Persistance::PetsList);
			Persistance::PersistXMLFile(Persistance::XML_PET_FILE_NAME, Persistance::PetsList);
			return;
		}
	}
}

void ServiceBarry::Service::DeletePet(int id)
{
	for (int i = 0; i < Persistance::PetsList->Count; i++) {
		if (Persistance::PetsList[i]->Id == id) {
			Persistance::PetsList->RemoveAt(i);
			Persistance::PersistBinaryFile(Persistance::BIN_PET_FILE_NAME, Persistance::PetsList);
			Persistance::PersistTextFile(TXT_PET_FILE_NAME, Persistance::PetsList);
			Persistance::PersistXMLFile(Persistance::XML_PET_FILE_NAME, Persistance::PetsList);
			return;
		}
	}
}

Pet^ ServiceBarry::Service::QueryPetById(int id)
{
	Persistance::PetsList = QueryAllPets();
	for each (Pet ^ pet in Persistance::PetsList) {
		if (pet->Id == id) {
			return pet;
		}
	}
	throw gcnew PetIdNoFoundException("El Id ingresado de la mascota no existe.");
}

List<Pet^>^ ServiceBarry::Service::QueryAllPets()
{
	try {

		Persistance::PetsList = (List<Pet^>^)Persistance::LoadBinaryFile(Persistance::BIN_PET_FILE_NAME);

		if (Persistance::PetsList == nullptr)
			Persistance::PetsList = gcnew List<Pet^>();
	}
	catch (FileNotFoundException^ ex) {
	}
	return Persistance::PetsList;
}

//CRUD FOOD
void ServiceBarry::Service::AddFood(Food^ food)
{
	/*FoodList->Add(food);
	int id = FoodList->Count;
	FoodList[id - 1]->Id = id;
	int id_mayor = 0;
	for (int i = 0; i < FoodList->Count-1; i++) {
		if (id_mayor < FoodList[i]->Id) {
			id_mayor = FoodList[i]->Id;
		}
	}
	if (FoodList->Count > 1) {
		FoodList[id - 1]->Id = id_mayor + 1;
	}
	Persistance::PersistBinaryFile(BIN_FOOD_FILE_NAME, FoodList);
	Persistance::PersistTextFile(TXT_FOOD_FILE_NAME, FoodList);
	Persistance::PersistXMLFile(XML_FOOD_FILE_NAME, FoodList);
	*/
	Persistance::SQLAddFood(food);

}

void ServiceBarry::Service::UpdateFood(Food^ food)
{
	/*for (int i = 0; i < FoodList->Count; i++) {
		if (FoodList[i]->Id == food->Id) {
			FoodList[i] = food;
			Persistance::PersistBinaryFile(BIN_FOOD_FILE_NAME, FoodList);
			Persistance::PersistTextFile(TXT_FOOD_FILE_NAME, FoodList);
			Persistance::PersistXMLFile(XML_FOOD_FILE_NAME, FoodList);
			return;
		}
	}
	*/
	Persistance::SQLUpdateFood(food);
}

void ServiceBarry::Service::DeleteFood(int id)
{
	/*for (int i = 0; i < FoodList->Count; i++) {
		if (FoodList[i]->Id == id) {
			FoodList->RemoveAt(i);
			Persistance::PersistBinaryFile(BIN_FOOD_FILE_NAME, FoodList);
			Persistance::PersistTextFile(TXT_FOOD_FILE_NAME, FoodList);
			Persistance::PersistXMLFile(XML_FOOD_FILE_NAME, FoodList);
			return;
		}
	}*/
	Persistance::SQLdDeleteFood(id);
}

Food^ ServiceBarry::Service::QueryFoodbyId(int id)
{
	/*for each (Food ^ food in FoodList) {
		if (food->Id == id) {
			return food;
		}
	}*/
	return Persistance::SQLQueryFoodById(id);
}
List<Food^>^ ServiceBarry::Service::QueryAllFoods()
{

	/*try {

		FoodList = (List<Food^>^)Persistance::LoadBinaryFile(BIN_FOOD_FILE_NAME);
		if (FoodList == nullptr)
			FoodList = gcnew List<Food^>();
	}
	catch (FileNotFoundException^ ex) {
	}*/

	return Persistance::SQLQueryAllFoods();
}

List<Food^>^ ServiceBarry::Service::SearchFoodByBrand(String^ foodBrand)
{
	List<Food^>^ foodsList = QueryAllFoods();
	List<Food^>^ listToReturn = gcnew List<Food^>();
	for (int i = 0; i < foodsList->Count; i++) {
		if (foodsList[i]->FoodBrand->Contains(foodBrand))
			listToReturn->Add(FoodList[i]);
	}
	return listToReturn;
}

void ServiceBarry::Service::AddDispensadorPorMascota(Pet^ mascotaSeleccionada, Dispenser^ DispensadorSeleccionado)
{
	return Persistance::AddDispensadorPorMascota(mascotaSeleccionada, DispensadorSeleccionado);
}

//UART
String^ ServiceBarry::Service::SendDispenserInfoUART(int petId)
{
	String^ result;
	String^ message;
	try {
		Pet^ pet = QueryPetById(petId);
		message = "DISPENSER, PET_ASSIGNED, PET_FOODAMOUNT, SCHEDULE, " + pet->Name + " " + Convert::ToString(pet->FoodServing) + "g " + "(horario)" + "\n";
		commandsList->Add(message);
		Persistance::PersistTextFile(TXT_UART_FILE_NAME, commandsList);
		result = message;

	}
	catch (Exception^ ex) {
		throw ex;
	}

	return result;

}
void ServiceBarry::Service::EliminarHorarioDispensador(Dispenser^ dispensador, int horario)
{
	return Persistance::EliminarHorarioDispensador(dispensador, horario);
}

List<int>^ ServiceBarry::Service::ConsultarTodosHorariosPorDispensador(Dispenser^ d)
{
	if (d ==nullptr) {
		d = gcnew Dispenser();
	}
	Dispenser^ dispensador = ConsultarDispensadorPorId(d->Id);
	if (dispensador == nullptr) {
		dispensador = gcnew Dispenser();
	}
	if (dispensador->FeedingSchedule == nullptr) {
		dispensador->FeedingSchedule = gcnew List<int>();
	}
	return dispensador->FeedingSchedule;
}

List<Dispensation^>^ ServiceBarry::Service::ConsultarDispensadasPorDispensador(Dispenser^ d)
{
	Dispenser^ dispensador = ConsultarDispensadorPorId(d->Id);
	try {
		if (dispensador->dispensationRecord == nullptr) {
			dispensador->dispensationRecord = gcnew List<Dispensation^>();
		}
	}
	catch (FileNotFoundException^ ex) {
	}
	return dispensador->dispensationRecord;
}




void ServiceBarry::Service::AddDispensador(int id, DispensadorDisponible^ disp)
{
	return Persistance::AddDispensador(id, disp);
}

void ServiceBarry::Service::EliminarDispensador(int id)
{
	return Persistance::EliminarDispensador(id);
}

List<Dispenser^>^ ServiceBarry::Service::ConsultarTodosDispensadores()
{
	return Persistance::ConsultarTodosDispensadores();
}

Dispenser^ ServiceBarry::Service::ConsultarDispensadorPorId(int id)
{
	return Persistance::ConsultarDispensadorPorId(id);
}

void ServiceBarry::Service::AddHorarioDispensador(Dispenser^ dispensadorSeleccionado, int horario)
{
	return Persistance::AddHorarioDispensador(dispensadorSeleccionado, horario);
}

void ServiceBarry::Service::EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador)
{
	return Persistance::EliminarDispensadorPorMascota(mascota, dispensador);
}

void ServiceBarry::Service::AddDipensadorDisponible(DispensadorDisponible^ dispensador)
{
	 int id = Persistance::AddDipensadorDisponible(dispensador);
}

List<String^>^ ServiceBarry::Service::ConsultarMarcas()
{
	return Persistance::ConsultarMarcas();
}

List<String^>^ ServiceBarry::Service::ConsultarDispensadorMarca(String^ marca)
{
	return Persistance::ConsultarDispensadorMarca(marca);
}

List<String^>^ ServiceBarry::Service::ConsultarModelos(String^ marca)
{
	return Persistance::ConsultarModelos(marca);
}

List<String^>^ ServiceBarry::Service::ConsultarDispensadorModelo(String^ modelo, String^ marca)
{
	return Persistance::ConsultarDispensadorModelo(modelo,marca);
}

List<String^>^ ServiceBarry::Service::ConsultarColores(String^ marca)
{
	return Persistance::ConsultarColores(marca);
}

List<String^>^ ServiceBarry::Service::ConsultarDispensadorColor(String^ color, String^ marca)
{
	return Persistance::ConsultarDispensadorColor(color, marca);
}

DispensadorDisponible^ ServiceBarry::Service::EncontrarDispensador(String^ marca, String^ modelo)
{
	return Persistance::EncontrarDispensador(marca, modelo);
}

List<Food^>^ ServiceBarry::Service::ConsultarInventarioComida(String^ comida)
{
	FoodList = QueryAllFoods();
	List<Food^>^ resultado = gcnew List<Food^>();;
	for each (Food ^ f in FoodList) {
		if (f->Name->IndexOf(comida, StringComparison::OrdinalIgnoreCase) >= 0) {
			resultado->Add(f);
		}
	}
	return resultado;
}

Food^ ServiceBarry::Service::QueryFoodbyName(String^ nombreComida)
{
	FoodList = QueryAllFoods();
	for each (Food ^ f in FoodList) {
		if (f->Name == nombreComida) {
			return f;
		}
	}
	return nullptr;
}

void ServiceBarry::Service::AsignarComidaDispensador(Dispenser^ dispensador, Food^ comida)
{
	Persistance::lista_dispensadores = ConsultarTodosDispensadores();
	for each (Dispenser^ d in Persistance::lista_dispensadores) {
		if (d->Id = dispensador->Id) {
			d->ComidaAsignada = comida;
		}
	}
	Persistance::PersistBinaryFile(Persistance::BIN_DISPENSADOR_FILE_NAME,Persistance::lista_dispensadores);
	Persistance::PersistXMLFile(Persistance::XML_DISPENSADOR_FILE_NAME, Persistance::lista_dispensadores);
}

void ServiceBarry::Service::AsignarModoDipensador(Dispenser^ dispensador, String^ modo)
{
	return Persistance::AsignarModoDipensador(dispensador,modo);
}

void ServiceBarry::Service::ModificarPorcionAgua(Pet^ masctotaSeleccionada,double porcion, double agua)
{
	Persistance::PetsList = QueryAllPets();
	if (masctotaSeleccionada != nullptr) {
		for each (Pet ^ m in Persistance::PetsList) {
			if (m->Id = masctotaSeleccionada->Id) {
				m->FoodServing = porcion;
				m->WaterServing = agua;
			}
		}
		Persistance::PersistBinaryFile(Persistance::BIN_PET_FILE_NAME,Persistance::PetsList);
		Persistance::PersistXMLFile(Persistance::XML_PET_FILE_NAME, Persistance::PetsList);
	}
}

Pet^ ServiceBarry::Service::ConsultarMascotaAsignadaADispensador(int dispenserId)
{
	return Persistance::ConsultarMascotaAsignadaADispensador(dispenserId);
}

Food^ ServiceBarry::Service::ConsultarComidaDispensador(Pet^ mascota)
{
	/*Dispenser^ dispenser;
	Persistance::PetsList = QueryAllPets();
	for each (Pet ^ m in Persistance::PetsList) {
		if (m->Name == mascota->Name) {
			dispenser = m->PetDispenser;
		}
	}
	Persistance::lista_dispensadores = Persistance::ConsultarTodosDispensadores();
	for each (Dispenser ^ d in Persistance::lista_dispensadores) {
		if (d->Id == dispenser->Id) {
			return d->ComidaAsignada;
		}
	}*/
	Persistance::lista_dispensadores = ConsultarTodosDispensadores();
	Persistance::PetsList = QueryAllPets();
	for each (Pet ^ m in Persistance::PetsList) {
		if (m->Name == mascota->Name) {
			for each (Dispenser ^ d in Persistance::lista_dispensadores) {
				if (m->PetDispenser == d) {
					return d->ComidaAsignada;
				}
			}
		}
	}
}

int ServiceBarry::Service::SQLAddPet(Pet^ pet)
{
	return Persistance::SQLAddPet(pet);
}

int ServiceBarry::Service::SQLAddWeight(Pet^ pet)
{
	return Persistance::SQLAddWeight(pet);
}

int ServiceBarry::Service::SQLAddFoodServing(Pet^ pet)
{
	return Persistance::SQLAddFoodServing(pet);
}

int ServiceBarry::Service::SQLAddWaterServing(Pet^ pet)
{
	return Persistance::SQLAddWaterServing(pet);
}

List<Pet^>^ ServiceBarry::Service::SQLQueryAllPets()
{
	return Persistance::SQLQueryAllPets();
}

Pet^ ServiceBarry::Service::SQLQueryWeightEvolutionByPetId(int petId)
{
	return Persistance::SQLQueryWeightEvolutionByPetId(petId);
}

Pet^ ServiceBarry::Service::SQLQueryFoodServingEvolutionByPetId(int petId)
{
	return Persistance::SQLQueryFoodServingEvolutionByPetId(petId);
}

Pet^ ServiceBarry::Service::SQLQueryWaterServingEvolutionByPetId(int petId)
{
	return Persistance::SQLQueryWaterServingEvolutionByPetId(petId);
}

int ServiceBarry::Service::SQLUpdatePet(Pet^ pet)
{
	return Persistance::SQLUpdatePet(pet);
}

int ServiceBarry::Service::SQLDeletePet(int petId)
{
	return Persistance::SQLDeletePet(petId);
}

Pet^ ServiceBarry::Service::SQLQueryPetById(int petId)
{
	return Persistance::SQLQueryPetById(petId);
}

Pet^ ServiceBarry::Service::ConsultarMascotaPorNombre(String^ nombreMascota)
{
	for each (Pet ^ p in Persistance::PetsList) {
		if (p->Name == nombreMascota) {
			return p;
		}
	}
	return nullptr;
}




String^ ServiceBarry::Service::DispenseFoodUART(int petId)
{
	String^ result;
	String^ dateNow = ((DateTime^)DateTime::Now)->ToString("yyyy/MM/dd");

	try {
		OpenPort();
		Pet^ pet = QueryPetById(petId);
		Dispenser^ d = pet->PetDispenser;

		List<Dispensation^>^DispensationList = Service::ConsultarDispensadasPorDispensador(d);

		Dispensation^ existingDispensation = nullptr;
		for each (Dispensation ^ disp in DispensationList) {

			if ((disp->Date)->Contains(dateNow)) {
				existingDispensation = disp;
				break;
			}
		}


		// Si no existe, crear una nueva
		if (existingDispensation == nullptr) {
			existingDispensation = gcnew Dispensation();
			existingDispensation->FoodDispensationInitialize();
			DispensationList->Add(existingDispensation);
			d->dispensationRecord = DispensationList;
		}
		else {
			existingDispensation->TimesDispensedFood += 1;
			for (int i = 0; i < DispensationList->Count; i++) {
				if (DispensationList[i]->Date == existingDispensation->Date) {
					DispensationList[i] = existingDispensation;
					d->dispensationRecord = DispensationList;
					break;
				}
			}
		}
		pet->PetDispenser = d;
		Persistance::ActualizarDispensador(d);
		Service::UpdatePet(pet);


		result = "Se están dispensando " + Convert::ToString(pet->FoodServing) + "g en el plato de " + pet->Name;
		Byte FoodServingByte = Convert::ToByte(pet->FoodServing);
		ArduinoPort->Write(Convert::ToString(FoodServingByte, 16));


	}

	catch (Exception^ ex) {
		throw ex;
	}

	finally {
		ClosePort();
	}
	
	return result ;

}

String^ ServiceBarry::Service::DispenseWater(int petId)
{
	String^ result;
	String^ dateNow = ((DateTime^)DateTime::Now)->ToString("yyyy/MM/dd");
	Pet^ pet = QueryPetById(petId);
	try {
		OpenPort();
		Dispenser^ d = pet->PetDispenser;

		List<Dispensation^>^ DispensationList = Service::ConsultarDispensadasPorDispensador(d);

		Dispensation^ existingDispensation = nullptr;
		for each (Dispensation ^ disp in DispensationList) {

			if ((disp->Date)->Contains(dateNow)) {
				existingDispensation = disp;
				break;
			}
		}


		// Si no existe, crear una nueva
		if (existingDispensation == nullptr) {
			existingDispensation = gcnew Dispensation();
			existingDispensation->WaterDispensationInitialize();
			DispensationList->Add(existingDispensation);
			d->dispensationRecord = DispensationList;
		}
		else {
			existingDispensation->TimesDispensedWater += 1;
			for (int i = 0; i < DispensationList->Count; i++) {
				if (DispensationList[i]->Date == existingDispensation->Date) {
					DispensationList[i] = existingDispensation;
					d->dispensationRecord = DispensationList;
					break;
				}
			}
		}
		pet->PetDispenser = d;
		Persistance::ActualizarDispensador(d);
		Service::UpdatePet(pet);

		result = "Se están dispensando " + Convert::ToString(pet->WaterServing) + "mL en el recipiente de " + pet->Name;
		Byte WaterServingByte = Convert::ToByte(pet->WaterServing);
		ArduinoPort->Write(Convert::ToString(WaterServingByte, 16));
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		ClosePort();
	}
	return result;

}


void ServiceBarry::Service::OpenPort()
{
	try {
		ArduinoPort = gcnew SerialPort();
		ArduinoPort->PortName = "COM4";
		ArduinoPort->BaudRate = 9600;
		ArduinoPort->Open();
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

void ServiceBarry::Service::ClosePort()
{
	try {
		if (ArduinoPort->IsOpen)
			ArduinoPort->Close();
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
