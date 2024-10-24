#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace Barry;
using namespace BarryPersistance;

namespace ServiceBarry {
	public ref class Service
	{
	public:
		static String^ BIN_FOOD_FILE_NAME = "foods.bin";
		static String^ BIN_PET_FILE_NAME = "pets.bin";
		static String^ BIN_USER_FILE_NAME = "users.bin";
	private:
		//static List<Pet^>^ lista_mascotas = gcnew List<Pet^>();
		static List<User^>^ lista_usuarios = gcnew List<User^>();
		static List<Pet^>^ PetsList = gcnew List<Pet^>();
		static List<Food^>^ FoodList = gcnew List<Food^>();
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


	};
}
