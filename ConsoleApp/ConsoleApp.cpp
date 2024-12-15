#include "pch.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace Barry;
using namespace ServiceBarry;
using namespace System::IO::Ports;

int main(array<System::String ^> ^args)
{
    /*User^ usuario1 = gcnew User(1, "A", "A", "Admin", 1);
    User^ usuario2 = gcnew User(2, "B", "B", "A", 1);
    User^ usuario3 = gcnew User(3, "C", "C", "InternalUser", 1);
    Service::AddUsuario(usuario1);
    Service::AddUsuario(usuario2);
    Service::AddUsuario(usuario3);
    Service::EliminarUsuario(2);
    List<User^>^ lista = Service::ConsultarTodosUsuarios();
    for (int i = 0; i < lista->Count;i++) {
        Console::WriteLine("Usuario " + lista[i]->Id + ": " + lista[i]->Name + " tiene permisos de " + lista[i]->Role);
    }*/

    /*List<String^>^ lista_colores_Xiomi = gcnew List<String^>();
    lista_colores_Xiomi->Add("Rojo");
    lista_colores_Xiomi->Add("Rosado");
    lista_colores_Xiomi->Add("Verde");
    lista_colores_Xiomi->Add("Azul");
    lista_colores_Xiomi->Add("Amarillo");
    List<String^>^ lista_colores_Samsung = gcnew List<String^>();
    lista_colores_Samsung->Add("Celeste");
    lista_colores_Samsung->Add("Blanco");
    lista_colores_Samsung->Add("Negro");
    lista_colores_Samsung->Add("Gris");
    lista_colores_Samsung->Add("Naranja");
    List<String^>^ lista_colores_Nexxt = gcnew List<String^>();
    lista_colores_Nexxt->Add("Verde");
    lista_colores_Nexxt->Add("Azul");
    lista_colores_Nexxt->Add("Negro");
    lista_colores_Nexxt->Add("Gris");
    lista_colores_Nexxt->Add("Naranja");
    lista_colores_Nexxt->Add("Morado");
    lista_colores_Nexxt->Add("Marrón");
    List<String^>^ lista_colores_Wapet = gcnew List<String^>();
    lista_colores_Wapet->Add("Rojo");
    lista_colores_Wapet->Add("Rosado");
    lista_colores_Wapet->Add("Blanco");
    lista_colores_Wapet->Add("Negro");
    lista_colores_Wapet->Add("Verde");
    lista_colores_Wapet->Add("Amarillo");

    for (int i = 0; i < lista_colores_Xiomi->Count;i++) {
        String^ c = lista_colores_Xiomi[i];
        DispensadorDisponible^ d1 = gcnew DispensadorDisponible("Xiaomi", "X101", c, 11, 10, 20, "5L", "ABS", "Eléctrica");
        Service::AddDipensadorDisponible(d1);
        DispensadorDisponible^ d2 = gcnew DispensadorDisponible("Xiaomi", "X103", c, 18, 15, 25, "7L", "Polipropileno", "Eléctrica");
        Service::AddDipensadorDisponible(d2);
        DispensadorDisponible^ d3 = gcnew DispensadorDisponible("Xiaomi", "X105", c, 19, 17, 26, "9L", "Polietileno de Alta Densidad", "Eléctrica");
        Service::AddDipensadorDisponible(d3);
    }
    for (int i = 0; i < lista_colores_Samsung->Count; i++) {
        String^ c = lista_colores_Xiomi[i];
        DispensadorDisponible^ d1 = gcnew DispensadorDisponible("Samsung", "SM150", c, 10, 10, 15, "3kg", "Polipropileno", "Baterías");
        Service::AddDipensadorDisponible(d1);
        DispensadorDisponible^ d2 = gcnew DispensadorDisponible("Samsung", "SM210", c, 18, 16, 25, "5kg", "Poliestireno", "Baterías");
        Service::AddDipensadorDisponible(d2);
        DispensadorDisponible^ d3 = gcnew DispensadorDisponible("Samsung", "SM320", c, 20, 17.5, 26, "7kg", "ABS", "Eléctrica");
        Service::AddDipensadorDisponible(d3);
        DispensadorDisponible^ d4 = gcnew DispensadorDisponible("Samsung", "SM430", c, 25, 18.4, 30, "8kg", "Alumnio", "Eléctrica");
        Service::AddDipensadorDisponible(d4);
    }
    for (int i = 0; i < lista_colores_Nexxt->Count; i++) {
        String^ c = lista_colores_Nexxt[i];
        DispensadorDisponible^ d1 = gcnew DispensadorDisponible("Nexxt", "NXXT01", c, 17, 17, 20.5, "5kg", "ABS", "Panel Solar");
        Service::AddDipensadorDisponible(d1);
        DispensadorDisponible^ d2 = gcnew DispensadorDisponible("Nexxt", "NXXT03", c, 18, 18, 25, "7kg", "Polipropileno", "Panel Solar");
        Service::AddDipensadorDisponible(d2);
    }
    for (int i = 0; i < lista_colores_Wapet->Count; i++) {
        String^ c = lista_colores_Wapet[i];
        DispensadorDisponible^ d1 = gcnew DispensadorDisponible("Wapet", "WPT582", c, 17, 17, 20.5, "6L", "Alumnio", "Panel Solar");
        Service::AddDipensadorDisponible(d1);
        DispensadorDisponible^ d2 = gcnew DispensadorDisponible("Wapet", "WPT592", c, 24, 24, 30, "10L", "Alumnio", "Panel Solar");
        Service::AddDipensadorDisponible(d2);
    }*/
    SerialPort^ serialPort = gcnew SerialPort("COM3", 115200);
    try {
        serialPort->Open();
        String^ dato_recibido = serialPort->PortName;
        Console::WriteLine(dato_recibido);
        while (true) {
            if (serialPort->BytesToRead > 0) {
                String^ data = serialPort->ReadLine(); // Leer una línea desde el puerto
                Console::WriteLine("Dato recibido: {0}", data);
            }
        }
    }
    catch (IO::IOException^ e) {
        Console::WriteLine("Error de comunicación: {0}", e->Message);
    }
    catch (UnauthorizedAccessException^ e) {
        Console::WriteLine("Acceso denegado al puerto: {0}", e->Message);
    }
    catch (Exception^ e) {
        Console::WriteLine("Error inesperado: {0}", e->Message);
    }
    finally {
        // Cerrar el puerto al salir
        if (serialPort->IsOpen) {
            serialPort->Close();
            Console::WriteLine("Puerto cerrado.");
        }
    }
    return 0;
}
