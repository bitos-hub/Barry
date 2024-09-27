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
	public:
		//static Pet^ ConsultarMascota(int);
		//static void ConsultarTodasMascotas();
		static void AddUsuario(User^);
		static void ActualizarUsuario(User^);
		static void EliminarUsuario(int id);
		static User^ ConsultarUsuario(int id);
		static List<User^>^ ConsultarTodosUsuarios();
	};
}
