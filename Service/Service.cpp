#include "pch.h"

#include "Service.h"
#include "Excepcion_existe_admin.h"


void ServiceBarry::Service::AddUsuario(User^ usuario)
{
	for each (User ^ _usuario in lista_usuarios) {
		if (_usuario->Role == usuario->Role) {
			throw gcnew Excepcion_existe_admin("Ya existe un administrador");
		}
	}
	lista_usuarios->Add(usuario);
}

void ServiceBarry::Service::ActualizarUsuario(User^ usuario)
{
	for (int i = 0; i < lista_usuarios->Count; i++) {
		if (lista_usuarios[i]->Id == usuario->Id) {
			lista_usuarios[i] = usuario;
			return;
		}
	}
}

void ServiceBarry::Service::EliminarUsuario(int id)
{
	for (int i = 0; i < lista_usuarios->Count; i++) {
		if (lista_usuarios[i]->Id == id) {
			lista_usuarios->RemoveAt(i);
			return;
		}
	}
}

User^ ServiceBarry::Service::ConsultarUsuario(int id)
{
	for each (User^ user in lista_usuarios) {
		if (user->Id == id) {
			return user;
		}
	}
	return nullptr;
}

List<User^>^ ServiceBarry::Service::ConsultarTodosUsuarios()
{
	return lista_usuarios;
}

//CRUD FOOD
void ServiceBarry::Service::AddFood(Food^ food)
{
	FoodList->Add(food);
	
}

void ServiceBarry::Service::UpdateFood(Food^ food)
{
	for (int i = 0; i < FoodList->Count; i++) {
		if (FoodList[i]->Id == food->Id) {
			FoodList[i] = food;
			return;
		}
	}
}

void ServiceBarry::Service::DeleteFood(int id)
{
	for (int i = 0; i < FoodList->Count; i++) {
		if (FoodList[i]->Id == id) {
			FoodList->RemoveAt(i);
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
	return FoodList;
}




