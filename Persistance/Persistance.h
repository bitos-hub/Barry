#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace Barry;

namespace BarryPersistance {
	public ref class Persistance
	{
	public:
		static String^ BIN_HORARIOS_FILE_NAME = "horarios.bin";
		static String^ XML_HORARIOS_FILE_NAME = "horarios.xml";
		static String^ XML_PETS_FILE_NAME = "pets.xml";
		
	private:
		static List<int>^ lista_horarios = gcnew List<int>();
	public:
		//static void PersistTextFile(String^ fileName, Object^ persistObject);
		//static Object^ LoadTextFile(String^ fileName);
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLFile(String^ fileName);
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);

		static void AddHorario(int horario);
		static void EliminarHorario(int horario);
		static List<int>^ ConsultarTodosHorarios();

	};
}
