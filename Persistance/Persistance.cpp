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
        if (persistObject->GetType() == List<User^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        /*if (persistObject->GetType() == List<Administrator^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Administrator^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        if (persistObject->GetType() == List<PortalUser^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<PortalUser^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        if (persistObject->GetType() == List<InternalUser^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<InternalUser^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }*/

        if (persistObject->GetType() == List<Dispenser^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Dispenser^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        if (persistObject->GetType() == List<Food^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Food^>::typeid);
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

Object^ BarryPersistance::Persistance::LoadUsersXmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<User^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
            result = (List<User^>^) xmlSerializer->Deserialize(reader);
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

Object^ BarryPersistance::Persistance::LoadDispensersXmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Dispenser^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Dispenser^>::typeid);
            result = (List<Dispenser^>^) xmlSerializer->Deserialize(reader);
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
Object^ BarryPersistance::Persistance::LoadPetsXmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Pet^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Pet^>::typeid);
            result = (List<Pet^>^) xmlSerializer->Deserialize(reader);
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

Object^ BarryPersistance::Persistance::LoadFoodXmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Food^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Food^>::typeid);
            result = (List<Food^>^) xmlSerializer->Deserialize(reader);
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
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        if (persistObject->GetType() == List<String^>::typeid) {
            List<String^>^ commands = (List<String^>^) persistObject;
            for (int i = 0; i < commands->Count; i++) {
                String^ r = commands[i];
                writer->WriteLine(r);
            }
        }
        if (persistObject->GetType() == List<User^>::typeid) {
            List<User^>^ users = (List<User^>^) persistObject;
            for (int i = 0; i < users->Count; i++) {
                User^ u = users[i];
                if (u->HistorialActividades !=nullptr) {
                    String^ historialString = String::Join(";", u->HistorialActividades->ToArray());
                    writer->WriteLine("{0}|{1}|{2}|{3}|{4}|{5}",
                        u->Id, u->Name, historialString, u->Password, u->PhoneNumber, u->Role);
                }
                else {
                    writer->WriteLine("{0}|{1}|{2}|{3}|{4}",
                        u->Id, u->Name, u->Password, u->PhoneNumber, u->Role);
                }
            }
        }
        if (persistObject->GetType() == List<Dispenser^>::typeid) {
            List<Dispenser^>^ dispenser = (List<Dispenser^>^) persistObject;
            for (int i = 0; i < dispenser->Count; i++) {
                Dispenser^ d = dispenser[i];
                writer->WriteLine("{0}|{1}|{2:F1}|{3}|{4:F1}|{5}",
                    d->Id, d->AssignedTo, d->DispenserFood, d->FeedingSchedule, d->FoodAmount, d->IsPlateFull);
            }
        }
        if (persistObject->GetType() == List<Pet^>::typeid) {
            List<Pet^>^ pet = (List<Pet^>^) persistObject;
            for (int i = 0; i < pet->Count; i++) {
                Pet^ p = pet[i];
                String^ photoBase64 = "";
                if (p->Photo != nullptr) {
                    photoBase64 = Convert::ToBase64String(p->Photo);
                }
                writer->WriteLine("{0}|{1}|{2:F1}|{3}|{4}|{5}|{6}|{7}|{8:F1}",
                    p->Id, p->Name, p->FoodServing, p->Owner, p->PetDispenser,
                    photoBase64, p->Specie, p->Status, p->Weight);
            }
        }
        if (persistObject->GetType() == List<Food^>::typeid) {
            List<Food^>^ food = (List<Food^>^) persistObject;
            for (int i = 0; i < food->Count; i++) {
                Food^ f = food[i];
                writer->WriteLine("{0}|{1}|{2}|{3:F1}|{4}|{5:F1}",
                    f->Id, f->Name, f->Status, f->FoodAmount, f->FoodBrand, f->FoodPrice);
            }
        }

    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}
Object^ BarryPersistance::Persistance::LoadUsersTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<User^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            User^ user = gcnew User();
            user->Id = Convert::ToInt32(record[0]);
            user->Name = record[1];
            user->HistorialActividades = gcnew List<String^>();
            if (record[2] != "") {
                array<String^>^ actividades = record[2]->Split(';');
                user->HistorialActividades->AddRange(actividades);
            }
            user->Password = record[3];
            user->PhoneNumber = Convert::ToInt32(record[4]);
            user->ProfileStatus = Convert::ToBoolean(record[5]);
            user->Role = record[6];

            ((List<User^>^)result)->Add(user);
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}
Object^ BarryPersistance::Persistance::LoadDispensersTextFile(String^ fileName)
{
    /*FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<Dispenser^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            Dispenser^ dispenser = gcnew Dispenser();
            dispenser->Id= Convert::ToInt32(record[0]);
            Report^ assignedTo = gcnew Report();
            //assignedTo->WeightTable->Add(record[2]);
            robot->Name = record[1]; robot->Brand = brand;
            robot->Model = record[3]; robot->LoadCapacity = Convert::ToDouble(record[4]);
            robot->Speed = Convert::ToDouble(record[5]);
            ((List<Dispenser^>^)result)->Add(dispenser);
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }*/
    return 1;
}
Object^ BarryPersistance::Persistance::LoadPetsTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<Pet^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            Pet^ pet = gcnew Pet();
            pet->Id = Convert::ToInt32(record[0]);
            pet->Name = record[1];
            pet->FoodServing = Convert::ToDouble(record[2]);
            User^ user = gcnew User();
            user->Name = record[3];
            pet->Owner = user;
            Dispenser^ dispenser = gcnew Dispenser();
            dispenser->Id = Convert::ToInt32(record[4]);
            pet->PetDispenser = dispenser;
  
            if (record[5] != "") {
                array<Byte>^ photoBytes = Convert::FromBase64String(record[5]);
                pet->Photo = photoBytes;
            }

            pet->Specie = record[6];
            pet->Status = record[7];
            pet->Weight = Convert::ToDouble(record[8]);
            ((List<Pet^>^)result)->Add(pet);
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}
Object^ BarryPersistance::Persistance::LoadFoodTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<Food^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            Food^ food = gcnew Food();
            
            food->Id = Convert::ToInt32(record[0]);
            food->Name = record[1];
            food->Status = record[2];
            food->FoodAmount = Convert::ToDouble(record[3]);
            food->FoodBrand = record[4];
            food->FoodPrice = Convert::ToDouble(record[5]);
            ((List<Food^>^)result)->Add(food);
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}


void BarryPersistance::Persistance::AddDispensador(int id)
{
    Dispenser^ dispensador = gcnew Dispenser();
    lista_dispensadores = ConsultarTodosDispensadores();
    for (int i = 0; i < lista_dispensadores->Count; i++) {
        Dispenser^ d = lista_dispensadores[i];
        if (d->Id == id) {
            throw gcnew System::Exception("Ya existe un dispensador con este ID.");
        }
    }
    dispensador->Id = id;
    lista_dispensadores->Add(dispensador);
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME, lista_dispensadores);
    PersistXMLFile(XML_DISPENSADOR_FILE_NAME, lista_dispensadores);
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

Pet^ BarryPersistance::Persistance::ConsultarMascotaAsignadaADispensador(int dispenserId)
{
    //oli
    for (int i = 0; i < PetsList->Count; i++) {
        Pet^ m = PetsList[i];
        if (m->PetDispenser->Id == dispenserId) {
            return m;
        }
    }
    return nullptr;
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
