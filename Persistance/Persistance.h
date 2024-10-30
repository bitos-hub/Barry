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
		static List<Pet^>^ PetsList = gcnew List<Pet^>();
	private:
		//static List<int>^ lista_horarios = gcnew List<int>();
		
		static List<int>^ lista_dispensadores = gcnew List<int>();
	public:
		//static void PersistTextFile(String^ fileName, Object^ persistObject);
		//static Object^ LoadTextFile(String^ fileName);
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLFile(String^ fileName);
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);

		static void AddDispensadorPorMascota(Pet^ mascota, int idDispensador, int horario);
		static void EliminarHorarioDeMascota(Pet^ mascota, int horario);
		
		
		

		static void PersistTextFile(String^ fileName, Object^ persistObject);

	};
}
