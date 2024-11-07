#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace Barry;

namespace BarryPersistance {
	public ref class Persistance
	{
	public:
		//static String^ XML_HORARIOS_MASCOTAS_FILE_NAME = "horariosMascotas.xml";
		//static String^ BIN_HORARIOS_MASCOTAS_FILE_NAME = "horariosMascotas.bin";
		static String^ XML_PET_FILE_NAME = "pets.xml";
		static String^ BIN_PET_FILE_NAME = "pets.bin";
		static String^ BIN_DISPENSADOR_FILE_NAME = "dispensadores.bin";
		static String^ XML_DISPENSADOR_FILE_NAME = "dispensadores.xml";
		static List<Pet^>^ PetsList = gcnew List<Pet^>();
	private:
		//static List<int>^ lista_horarios = gcnew List<int>();
		
		static List<Dispenser^>^ lista_dispensadores = gcnew List<Dispenser^>();
	public:
		//static void PersistTextFile(String^ fileName, Object^ persistObject);
		//static Object^ LoadTextFile(String^ fileName);
		
		//XML-Persist
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		//XML-Load
		static Object^ LoadXMLFile(String^ fileName);
		static Object^ LoadUsersXmlFile(String^ fileName);
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
		//TXT-Load
		static Object^ LoadUsersTextFile(String^ fileName);
		static Object^ LoadDispensersTextFile(String^ fileName);
		static Object^ LoadPetsTextFile(String^ fileName);
		static Object^ LoadFoodTextFile(String^ fileName);

		static void AddDispensador(int id);
		static List<Dispenser^>^ ConsultarTodosDispensadores();
		static void EliminarDispensador(int id);
		static Dispenser^ ConsultarDispensadorPorId(int);
		static void AddHorarioDispensador(Dispenser^ dispensadorSeleccionado, int horario);
		static void EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador);
		static Pet^ ConsultarMascotaAsignadaADispensador(int dispenserId);
	};
}
