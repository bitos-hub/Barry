#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace Barry;
using namespace System::Data::SqlClient;

namespace BarryPersistance {
	public ref class Persistance
	{
	private:
		static SqlConnection^ GetConnection();

	public:
		static String^ XML_HORARIOS_MASCOTAS_FILE_NAME = "horariosMascotas.xml";
		static String^ BIN_HORARIOS_MASCOTAS_FILE_NAME = "horariosMascotas.bin";
		static String^ XML_PET_FILE_NAME = "pets.xml";
		static String^ BIN_PET_FILE_NAME = "pets.bin";
		static String^ BIN_DISPENSADOR_FILE_NAME = "dispensadores.bin";
		static String^ XML_DISPENSADOR_FILE_NAME = "dispensadores.xml";
		static String^ TXT_DISPENSADOR_FILE_NAME = "dispensadores.txt";
		static String^ BIN_DISPENSADOR_DISPONIBLE_FILE_NAME = "dispensadores_disponibles.bin";
		static String^ TXT_DISPENSADOR_DISPONIBLE_FILE_NAME = "dispensadores_disponibles.txt";
		static String^ XML_DISPENSADOR_DISPONIBLE_FILE_NAME = "dispensadores_disponibles.xml";
		static List<Pet^>^ PetsList = gcnew List<Pet^>();
		static List<Dispenser^>^ lista_dispensadores = gcnew List<Dispenser^>();
	private:
		static List<DispensadorDisponible^>^ lista_dispensadores_disponibles = gcnew List<DispensadorDisponible^>();


	public:
		//static void PersistTextFile(String^ fileName, Object^ persistObject);
		//static Object^ LoadTextFile(String^ fileName);

		//XML-Persist
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		//XML-Load
		static Object^ LoadXMLFile(String^ fileName);

		static Object^ LoadDispensersXmlFile(String^ fileName);
		static Object^ LoadPetsXmlFile(String^ fileName);
		static Object^ LoadFoodXmlFile(String^ fileName);


		//BIN-Persist
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		//BIN-Load
		static Object^ LoadBinaryFile(String^ fileName);

		static void AddDispensadorPorMascota(Pet^ mascotaSeleccionada, Dispenser^ DispensadorSeleccionado);
		static void EliminarHorarioDispensador(Dispenser^ dispensador, int horario);


		//TXT-Persist
		static void PersistTextFile(String^ fileName, Object^ persistObject);
		//static void PersistDispensationTextFile(String^ fileName, Object^ persistObject);
		//TXT-Load
		static Object^ LoadUsersTextFile(String^ fileName);
		static Object^ LoadDispensersTextFile(String^ fileName);
		static Object^ LoadPetsTextFile(String^ fileName);
		static Object^ LoadFoodTextFile(String^ fileName);
		//static Object^ LoadDispensationTextFile(String^ fileName);

		
		
		
		
		
		
		static void EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador);
		static List<int>^ ConsultarHorariosPorIdDispensador(int id);
		static List<Dispensation^>^ ConsultarDispensadasPorIdDispensador(int id);
		static void ActualizarDipensadas(int dispensadorId, Dispensation^ disp);


		/*Fran*/

		static int AddDipensadorDisponible(DispensadorDisponible^ dispensador); //ok
		static List<String^>^ ConsultarMarcas();
		static List<DispensadorDisponible^>^ ConsultarDispensadoresDisponibles(); //ok
		static List<String^>^ ConsultarDispensadorMarca(String^ marca);
		static List<String^>^ ConsultarModelos(String^ marca);
		static List<String^>^ ConsultarDispensadorModelo(String^ modelo, String^ marca);
		static List<String^>^ ConsultarColores(String^ marca);
		static List<String^>^ ConsultarDispensadorColor(String^ color, String^ marca);
		static DispensadorDisponible^ EncontrarDispensador(String^ marca, String^ modelo);
		static void AsignarModoDipensador(Dispenser^ dispensador, String^ modo);

		/*Hasta aqu�*/

		static Pet^ ConsultarMascotaAsignadaADispensador(int dispenserId);

		//SQL uwu

		//PET
		static int SQLAddPet(Pet^ pet);
		static int SQLAddWeight(Pet^ pet);
		static int SQLAddFoodServing(Pet^ pet);
		static int SQLAddWaterServing(Pet^ pet);

		static List<Pet^>^ SQLQueryAllPets();
		static Pet^ SQLQueryWeightEvolutionByPetId(int petId);
		static Pet^ SQLQueryFoodServingEvolutionByPetId(int petId);
		static Pet^ SQLQueryWaterServingEvolutionByPetId(int petId);
		static int SQLUpdatePet(Pet^ pet);
		static int SQLDeletePet(int petId);
		static Pet^ SQLQueryPetById(int petId);

		//FOOD
		static int SQLAddFood(Food^ food);
		static int SQLdDeleteFood(int foodId);
		static List<Food^>^ SQLQueryAllFoods();
		static int SQLUpdateFood(Food^ food);
		static Food^ SQLQueryFoodById(int foodId);

		//Users

		static int AddUsuario(User^ user);
		static int ActualizarUsuario(User^ user);
		static int EliminarUsuario(int id);
		static List<User^>^ ConsultarTodosUsuarios();

		//Dispensador
		
		static int AddDispensador(DispensadorDisponible^ disp);
		static List<Dispenser^>^ ConsultarTodosDispensadores();
		static int AddModoOperacionDispensador(int id,String^ ModoOperacion);
		static int AddComidaDispensador(int id, Food^ comida);
		static DispensadorDisponible^ ConsultarDispensadorDisponiblePorId(int id);
		static int EliminarDispensador(int id);
		static int ActualizarDispensador(Dispenser^ d);
		static Dispenser^ ConsultarDispensadorPorId(int);
		static void AddHorarioDispensador(Dispenser^ dispensadorSeleccionado, int horario);
		static void AgregarDispensadasPorDispensador(int idDispensador,Dispensation^ dispensada);
		static void ActualizarDispensadasPorDispensador(int idDispensasor,Dispensation^ dispensada);
		static Dispenser^ ConsultarDispensadorPorMascota(int id);
	};
}