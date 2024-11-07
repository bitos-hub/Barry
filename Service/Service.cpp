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


void ServiceBarry::Service::AddUsuario(User^ usuario)
{
	lista_usuarios->Add(usuario);
	Persistance::PersistBinaryFile(BIN_USER_FILE_NAME, lista_usuarios);
	Persistance::PersistTextFile(TXT_USER_FILE_NAME, lista_usuarios);
	//Persistance::PersistXMLFile(XML_USER_FILE_NAME, lista_usuarios);
	/*
	if (usuario->GetType() == Administrator::typeid) {
		Persistance::PersistXMLFile(XML_ADMINS_FILE_NAME, lista_admins);
	}
	if (usuario->GetType() == PortalUser::typeid) {
		Persistance::PersistXMLFile(XML_PORTAL_USERS_FILE_NAME, lista_portalUsers);
	}
	if (usuario->GetType() == InternalUser::typeid) {
		Persistance::PersistXMLFile(XML_INTERNAL_USERS_FILE_NAME, lista_internalUser);
	}*/
}

void ServiceBarry::Service::ActualizarUsuario(User^ usuario)
{
	for (int i = 0; i < lista_usuarios->Count; i++) {
		if (lista_usuarios[i]->Id == usuario->Id) {
			lista_usuarios[i] = usuario;
			Persistance::PersistBinaryFile(BIN_USER_FILE_NAME, lista_usuarios);
			Persistance::PersistTextFile(TXT_USER_FILE_NAME, lista_usuarios);
			//Persistance::PersistXMLFile(XML_USER_FILE_NAME, lista_usuarios);
			return;
		}
	}
}

void ServiceBarry::Service::EliminarUsuario(int id)
{
	for (int i = 0; i < lista_usuarios->Count; i++) {
		if (lista_usuarios[i]->Id == id) {
			lista_usuarios->RemoveAt(i);
			Persistance::PersistBinaryFile(BIN_USER_FILE_NAME, lista_usuarios);
			Persistance::PersistTextFile(TXT_USER_FILE_NAME, lista_usuarios);
			//Persistance::PersistXMLFile(XML_USER_FILE_NAME, lista_usuarios);
			return;
		}
	}
}

User^ ServiceBarry::Service::ConsultarUsuario(String^ UserName)
{
	for each (User^ user in lista_usuarios) {
		if (user->Name == UserName) {
			return user;
		}
	}
	return nullptr;
}

List<User^>^ ServiceBarry::Service::ConsultarTodosUsuarios()
{
	try {

		lista_usuarios = (List<User^>^)Persistance::LoadBinaryFile(BIN_USER_FILE_NAME);
		if (lista_usuarios == nullptr)
			lista_usuarios = gcnew List<User^>();
	}
	catch (FileNotFoundException^ ex) {
	}

	return lista_usuarios;
}

void ServiceBarry::Service::AddPet(Pet^ pet)
{
	Persistance::PetsList->Add(pet);
	Persistance::PersistBinaryFile(Persistance::BIN_PET_FILE_NAME, Persistance::PetsList);
	Persistance::PersistTextFile(TXT_PET_FILE_NAME, Persistance::PetsList);
	Persistance::PersistXMLFile(Persistance::XML_PET_FILE_NAME, Persistance::PetsList);
}

void ServiceBarry::Service::UpdatePet(Pet^ pet)
{
	for (int i = 0; i < Persistance::PetsList->Count; i++) {
		if (Persistance::PetsList[i]->Id == pet->Id) {
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
	FoodList->Add(food);
	//Persistance::PersistTextFile(TXT_ROBOT_FILE_NAME, robotsList);
	//Persistance::PersistXMLFile(XML_ROBOT_FILE_NAME, robotsList);
	Persistance::PersistBinaryFile(BIN_FOOD_FILE_NAME, FoodList);
	Persistance::PersistTextFile(TXT_FOOD_FILE_NAME, FoodList);
	Persistance::PersistXMLFile(XML_FOOD_FILE_NAME, FoodList);

	
}

void ServiceBarry::Service::UpdateFood(Food^ food)
{
	for (int i = 0; i < FoodList->Count; i++) {
		if (FoodList[i]->Id == food->Id) {
			FoodList[i] = food;
			Persistance::PersistBinaryFile(BIN_FOOD_FILE_NAME, FoodList);
			Persistance::PersistTextFile(TXT_FOOD_FILE_NAME, FoodList);
			Persistance::PersistXMLFile(XML_FOOD_FILE_NAME, FoodList);
			return;
		}
	}
}

void ServiceBarry::Service::DeleteFood(int id)
{
	for (int i = 0; i < FoodList->Count; i++) {
		if (FoodList[i]->Id == id) {
			FoodList->RemoveAt(i);
			Persistance::PersistBinaryFile(BIN_FOOD_FILE_NAME, FoodList);
			Persistance::PersistTextFile(TXT_FOOD_FILE_NAME, FoodList);
			Persistance::PersistXMLFile(XML_FOOD_FILE_NAME, FoodList);
			return;
		}
	}
}

Food^ ServiceBarry::Service::QueryFoodbyId(int id)
{
	for each (Food ^ food in FoodList) {
		if (food->Id == id) {
			return food;
		}
	}
	return nullptr;
}
List<Food^>^ ServiceBarry::Service::QueryAllFoods()
{
	
	try {
		
		FoodList = (List<Food^>^)Persistance::LoadBinaryFile(BIN_FOOD_FILE_NAME);
		if (FoodList == nullptr)
			FoodList = gcnew List<Food^>();
	}
	catch (FileNotFoundException^ ex) {
	}
	
	return FoodList;
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
	Dispenser^ dispensador = ConsultarDispensadorPorId(d->Id);
	if (dispensador->FeedingSchedule == nullptr) {
		dispensador->FeedingSchedule = gcnew List<int>();
	}
	return dispensador->FeedingSchedule;
}

void ServiceBarry::Service::AddDispensador(int id)
{
	return Persistance::AddDispensador(id);
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
	return Persistance::AddHorarioDispensador(dispensadorSeleccionado,horario);
}

void ServiceBarry::Service::EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador)
{
	return Persistance::EliminarDispensadorPorMascota(mascota,dispensador);
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
	try {
		OpenPort();
		Pet^ pet = QueryPetById(petId);
		result = "Se están dispensando " + Convert::ToString(pet->FoodServing)+  "g en el plato de "  + pet->Name;
		Byte FoodServingByte = Convert::ToByte(pet->FoodServing);
		ArduinoPort->Write(Convert::ToString(FoodServingByte,16));
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

