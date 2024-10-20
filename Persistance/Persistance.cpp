#include "pch.h"

#include "Persistance.h"
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;

void BarryPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Pet^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Pet^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ BarryPersistance::Persistance::LoadXMLFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result;
    XmlSerializer^ xmlSerializer;
    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            if (fileName->Equals(XML_PETS_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<Pet^>::typeid);
                result = xmlSerializer->Deserialize(reader);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }

    return result;
}

void BarryPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

Object^ BarryPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
    return result;
    // TODO: Insertar una instrucción "return" aquí
}

void BarryPersistance::Persistance::AddHorario(int horario)
{
    for each (int h in lista_horarios) {
        if (h == horario) {
            throw gcnew System::InvalidOperationException("Ya existe ese horario");
        }
    }
    lista_horarios->Add(horario);
    Persistance::PersistBinaryFile(BIN_HORARIOS_FILE_NAME, lista_horarios);
    Persistance::PersistXMLFile(XML_HORARIOS_FILE_NAME,lista_horarios);
}

void BarryPersistance::Persistance::EliminarHorario(int horario)
{
    for (int i = 0; i < lista_horarios->Count; i++) {
        if (lista_horarios[i] == horario) {
            lista_horarios->RemoveAt(i);
            return;
        }
    }
    throw gcnew System::InvalidOperationException("El horario no se encontró.");
}

List<int>^ BarryPersistance::Persistance::ConsultarTodosHorarios()
{
    lista_horarios = (List<int>^)LoadBinaryFile(BIN_HORARIOS_FILE_NAME);

    if (lista_horarios == nullptr)
        lista_horarios = gcnew List<int>();
    return lista_horarios;
}

