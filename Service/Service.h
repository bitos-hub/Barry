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
		static void AddPet(Pet^);
		static void UpdatePet(Pet^);
		static void DeletePet(int id);
		static Pet^ QueryPetById(int id);
		static List<Pet^>^ QueryAllPets();


		static void AddFood(Food^);
		static void UpdateFood(Food^);
		static void DeleteFood(int id);
		static Food^ QueryFoodbyId(int id);
		static List<Food^>^ QueryAllFoods();
	public: 
		static int VerifyAdmin();

	public:
		//Arduino
		static String^ SendDispenserInfoUART(int petId);
		static String^ DispenseFoodUART(int); //Para simulación
		static void OpenPort();
		static void ClosePort();


		

		static void AddDispensadorPorMascota(Pet^ mascotaSeleccionada, Dispenser^ DispensadorSeleccionado);
		static void EliminarHorarioDispensador(Dispenser^ dispensador, int horario);
		
		static Pet^ ConsultarMascotaPorNombre(String^ nombreMascota);

		static List<int>^ ConsultarTodosHorariosPorDispensador(Dispenser^ dispensador);
		static void AddDispensador(int id);
		static void EliminarDispensador(int);
		static List<Dispenser^>^ ConsultarTodosDispensadores();
		static Dispenser^ ConsultarDispensadorPorId(int);
		static void AddHorarioDispensador(Dispenser^ dispensadorSeleccionado, int horario);
		static void EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador);
	};
}
