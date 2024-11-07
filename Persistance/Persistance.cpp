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
        if (persistObject->GetType() == List<Dispenser^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Dispenser^>::typeid);
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

void BarryPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    try {
        file = gcnew FileStream(fileName, FileMode::Append, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        if (persistObject->GetType() == List<String^>::typeid) {
            List<String^>^ commands = (List<String^>^) persistObject;
            for (int i = 0; i < commands->Count; i++) {
                String^ r = commands[i];
                writer->WriteLine(r);
            }
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}
void BarryPersistance::Persistance::AddDispensador(int id)
{
    Dispenser^ dispensador = gcnew Dispenser();
    lista_dispensadores = ConsultarTodosDispensadores();
    for (int i = 0; i < lista_dispensadores->Count;i++) {
        Dispenser^ d = lista_dispensadores[i];
        if (d->Id == id) {
            throw gcnew System::Exception("Ya existe un dispensador con este ID.");
        }
    }
    dispensador->Id = id;
    lista_dispensadores->Add(dispensador);
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME,lista_dispensadores);
    PersistXMLFile(XML_DISPENSADOR_FILE_NAME,lista_dispensadores);
}

List<Dispenser^>^ BarryPersistance::Persistance::ConsultarTodosDispensadores()
{
    try {
        lista_dispensadores = (List<Dispenser^>^)LoadBinaryFile(BIN_DISPENSADOR_FILE_NAME);
        if (lista_dispensadores == nullptr)
            lista_dispensadores = gcnew List<Dispenser^>();
    }
    catch (FileNotFoundException^ ex) {
    }
    return lista_dispensadores;
}
void BarryPersistance::Persistance::EliminarDispensador(int id)
{
    lista_dispensadores = ConsultarTodosDispensadores();
    bool encontrado = false;
    for (int i = 0; i < lista_dispensadores->Count; i++) {
        Dispenser^ dispensador = lista_dispensadores[i];
        if (dispensador->Id == id) {
            lista_dispensadores->Remove(dispensador);
            encontrado = true;
            break;
        }
    }
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME,lista_dispensadores);
    if (!encontrado) {
        throw gcnew System::Exception("No existe un dispensador con ese ID");
    }
}

Dispenser^ BarryPersistance::Persistance::ConsultarDispensadorPorId(int id)
{
    lista_dispensadores = ConsultarTodosDispensadores();
    for each (Dispenser^ d in lista_dispensadores) {
        if (d->Id == id) {
            return d;
        }
    }
    return nullptr;
}

void BarryPersistance::Persistance::AddHorarioDispensador(Dispenser^ dispensadorSeleccionado, int horario)
{
    lista_dispensadores = ConsultarTodosDispensadores();
    for (int i = 0; i < lista_dispensadores->Count;i++) {
        Dispenser^ dispensador = lista_dispensadores[i];
        if (dispensador->Id==dispensadorSeleccionado->Id) {
            if (dispensadorSeleccionado->FeedingSchedule->Contains(horario)) {
                throw gcnew System::Exception("Ya se tiene este horario añadido.");
            }
            else {
                dispensadorSeleccionado->FeedingSchedule->Add(horario);
                dispensador->FeedingSchedule = dispensadorSeleccionado->FeedingSchedule;
            }
        }
    }
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME,lista_dispensadores);
    PersistXMLFile(XML_DISPENSADOR_FILE_NAME,lista_dispensadores);
}

void BarryPersistance::Persistance::EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador)
{
   
   for (int i = 0; i < PetsList->Count; i++) {
       Pet^ m = PetsList[i];
       if (m->PetDispenser == nullptr) {
           m->PetDispenser = gcnew Dispenser();
       }
       if (m->Name==mascota->Name) {
           if (m->PetDispenser->Id==dispensador->Id) {
               m->PetDispenser->Id = 0;
           }
           else {
               throw gcnew System::Exception("La mascota no está asignada a este dispensador.");
           }
       }
        
   }
    PersistBinaryFile(BIN_PET_FILE_NAME, PetsList);
    PersistXMLFile(XML_PET_FILE_NAME, PetsList);

}

void BarryPersistance::Persistance::AddDispensadorPorMascota(Pet^ mascotaSeleccionada, Dispenser^ DispensadorSeleccionado)
{
        mascotaSeleccionada->PetDispenser = gcnew Dispenser();
        for (int i = 0; i < PetsList->Count; i++) {
            Pet^ m = PetsList[i];
            if (m->PetDispenser==nullptr) {
                m->PetDispenser = gcnew Dispenser();
            }
            
            if (m->PetDispenser->Id == DispensadorSeleccionado->Id) {
                throw gcnew System::Exception("Ya hay una mascota asignada a este dispensador.");
            }
            
                if (m->Name == mascotaSeleccionada->Name) {
                    mascotaSeleccionada->PetDispenser = DispensadorSeleccionado;
                    m->PetDispenser = DispensadorSeleccionado;
                }
        }
        PersistBinaryFile(BIN_PET_FILE_NAME, PetsList);
        PersistXMLFile(XML_PET_FILE_NAME, PetsList);
}

void BarryPersistance::Persistance::EliminarHorarioDispensador(Dispenser^ dispensador, int horario)
{
    lista_dispensadores = ConsultarTodosDispensadores();
    for (int i = 0; i < lista_dispensadores->Count;i++) {
        Dispenser^ d = lista_dispensadores[i];
        if (d->Id == dispensador->Id) {
            if (d->FeedingSchedule->Contains(horario)) {
                d->FeedingSchedule->Remove(horario);
                PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME, lista_dispensadores);
                PersistXMLFile(XML_DISPENSADOR_FILE_NAME, lista_dispensadores);
                break;
            }
            else {
                throw gcnew System::Exception("El horario no se encontró en la lista de horarios.");
            }
        }
    }
}
