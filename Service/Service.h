#pragma once

using namespace System;
using namespace System::Threading;
using namespace System::Collections::Generic;
using namespace Barry;
using namespace BarryPersistance;
using namespace System::IO::Ports;

namespace ServiceBarry {
	public ref class Service
	{
	public:
		static String^ BIN_FOOD_FILE_NAME = "foods.bin";
		static String^ BIN_USER_FILE_NAME = "users.bin";
		static String^ TXT_UART_FILE_NAME = "uartSimulation.txt";

		//users
		static String^ TXT_USER_FILE_NAME = "users.txt";
		//pets
		static String^ TXT_PET_FILE_NAME = "pets.txt";
		//food
		static String^ XML_FOOD_FILE_NAME = "foods.xml";
		static String^ TXT_FOOD_FILE_NAME = "foods.txt";



	private:
		static List<User^>^ lista_usuarios = gcnew List<User^>();
		//static List<Pet^>^ PetsList = gcnew List<Pet^>();
		static List<Food^>^ FoodList = gcnew List<Food^>();
		static List<String^>^ commandsList = gcnew List<String^>;
		static SerialPort^ ArduinoPort;
	public:
		static void cargarUsuarios();
		static void AddUsuario(User^);
		static void ActualizarUsuario(User^);
		static void EliminarUsuario(int id);
		static User^ ConsultarUsuario(String^ UserName);
		static List<User^>^ ConsultarTodosUsuarios();
		static List<User^>^ QueryUserByName(String^ Username);

		static int AddPet(Pet^);
		static void UpdatePet(Pet^);
		static void DeletePet(int id);
		static Pet^ QueryPetById(int id);
		static List<Pet^>^ QueryAllPets();


		static void AddFood(Food^);
		static void UpdateFood(Food^);
		static void DeleteFood(int id);
		static Food^ QueryFoodbyId(int id);
		static List<Food^>^ QueryAllFoods();
		static List<Food^>^ SearchFoodByBrand(String^);
	public:
		static int VerifyAdmin();

	public:
		//Arduino
		static String^ SendDispenserInfoUART(int petId);
		static String^ DispenseFoodUART(int); //Para simulación
		static String^ DispenseWater(int);
		static void OpenPort();
		static void ClosePort();




		static void AddDispensadorPorMascota(Pet^ mascotaSeleccionada, Dispenser^ DispensadorSeleccionado);
		static void EliminarHorarioDispensador(Dispenser^ dispensador, int horario);

		static Pet^ ConsultarMascotaPorNombre(String^ nombreMascota);

		static List<int>^ ConsultarTodosHorariosPorDispensador(Dispenser^ dispensador);

		static List<Dispensation^>^ ConsultarDispensadasPorDispensador(Dispenser^ d);

		static void AddDispensador(int id, DispensadorDisponible^ disp); //quedarse con este
		static void EliminarDispensador(int);
		static List<Dispenser^>^ ConsultarTodosDispensadores();
		static Dispenser^ ConsultarDispensadorPorId(int);
		static void AddHorarioDispensador(Dispenser^ dispensadorSeleccionado, int horario);
		static void EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador);

		/*Fran*/

		static void AddDipensadorDisponible(DispensadorDisponible^ dispensador);
		static List<String^>^ ConsultarMarcas();
		static List<String^>^ ConsultarDispensadorMarca(String^ marca);
		static List<String^>^ ConsultarModelos(String^ marca);
		static List<String^>^ ConsultarDispensadorModelo(String^ modelo, String^ marca);
		static List<String^>^ ConsultarColores(String^ marca);
		static List<String^>^ ConsultarDispensadorColor(String^ color, String^ marca);
		static DispensadorDisponible^ EncontrarDispensador(String^ marca, String^ modelo);
		static List<Food^>^ ConsultarInventarioComida(String^ comida);
		static Food^ QueryFoodbyName(String^ nombreComida);
		static void AsignarComidaDispensador(Dispenser^ dispensador,Food^ comida);
		static void AsignarModoDipensador(Dispenser^ dispensador,String^ modo);

		/*Hasta aquí*/

		/*Seguda parte xd*/

		static void ModificarPorcionAgua(Pet^ masctotaSeleccionada,double porcion,double agua);

		/**/


		static Pet^ ConsultarMascotaAsignadaADispensador(int dispenserId);
		static Food^ ConsultarComidaDispensador(Pet^ mascota);

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
	};
}