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




