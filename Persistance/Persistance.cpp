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
            if (fileName->Equals(XML_PET_FILE_NAME)) {
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

void BarryPersistance::Persistance::AddDispensadorPorMascota(Pet^ mascota, int idDispensador, int horario)
{
    if (mascota == nullptr) {
        throw gcnew System::ArgumentNullException("La mascota no puede ser nula.");
    }

    if (mascota->PetDispenser == nullptr) {
        mascota->PetDispenser = gcnew Dispenser();
    }
    for each (int id in lista_dispensadores) {
        if (idDispensador == id) {
            throw gcnew System::InvalidOperationException("Ya hay una mascota asignada a este dispensador");
        }
        else {
            mascota->PetDispenser->Id = idDispensador;
            mascota->PetDispenser->FeedingSchedule->Add(horario);
            lista_mascotas->Add(mascota);
            //PersistBinaryFile(BIN_HORARIOS_MASCOTAS_FILE_NAME, mascota->PetDispenser->FeedingSchedule);
            //PersistXMLFile(XML_HORARIOS_MASCOTAS_FILE_NAME, mascota->PetDispenser->FeedingSchedule);
            PersistBinaryFile(BIN_PET_FILE_NAME, lista_mascotas);
            PersistXMLFile(XML_PET_FILE_NAME, lista_mascotas);
            PersistBinaryFile(BIN_PET_FILE_NAME, lista_dispensadores);
            PersistXMLFile(XML_PET_FILE_NAME, lista_dispensadores);
        }
    }
}

void BarryPersistance::Persistance::EliminarHorarioDeMascota(Pet^ mascota, int horario)
{
    if (mascota->PetDispenser != nullptr) { // se verifica si el horario está en el FeedingSchedule
        if (mascota->PetDispenser->FeedingSchedule->Contains(horario)) {
            mascota->PetDispenser->FeedingSchedule->Remove(horario);
            PersistBinaryFile(BIN_PET_FILE_NAME, mascota->PetDispenser->FeedingSchedule);
            PersistXMLFile(XML_PET_FILE_NAME, mascota->PetDispenser->FeedingSchedule);
            return;
        }
        else {
            throw gcnew System::InvalidOperationException("El horario no se encontró en la lista de horarios.");
        }
    }
    else {
        throw gcnew System::InvalidOperationException("La mascota no tiene un dispensador asignado.");
    }
}
