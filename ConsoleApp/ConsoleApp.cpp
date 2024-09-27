#include "pch.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace Barry;
using namespace ServiceBarry;

int main(array<System::String ^> ^args)
{
    User^ usuario1 = gcnew User(1,"A","A", "Admin", 1);
    User^ usuario2 = gcnew User(2, "B", "B", "A", 1);
    User^ usuario3 = gcnew User(3, "C", "C", "InternalUser", 1);
    Service::AddUsuario(usuario1);
    Service::AddUsuario(usuario2);
    Service::AddUsuario(usuario3);
    Service::EliminarUsuario(2);
    List<User^>^ lista = Service::ConsultarTodosUsuarios();
    for (int i = 0; i < lista->Count;i++) {
        Console::WriteLine("Usuario " + lista[i]->Id + ": " + lista[i]->Name + " tiene permisos de " + lista[i]->Role);
    }
}
