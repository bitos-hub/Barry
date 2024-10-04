#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace Barry;

namespace ServiceBarry {
	public ref class Service
	{
	private:
		//static List<Pet^>^ lista_mascotas = gcnew List<Pet^>();
		static List<User^>^ lista_usuarios = gcnew List<User^>();
		static List<Food^>^ FoodList = gcnew List<Food^>();
	public:
		//static Pet^ ConsultarMascota(int);
		//static void ConsultarTodasMascotas();
		static void AddUsuario(User^);
		static void ActualizarUsuario(User^);
		static void EliminarUsuario(int id);
		static User^ ConsultarUsuario(int id);
		static List<User^>^ ConsultarTodosUsuarios();

		static void AddFood(Food^);
		static void UpdateFood(Food^);
		static void DeleteFood(int id);
		static Food^ QueryFoodbyId(int id);
		static List<Food^>^ QueryAllFoods();
	};
}
