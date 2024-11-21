#include "pch.h"

#include "Persistance.h"
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;

SqlConnection^ BarryPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "BarryBites123";
    String^ serverName = "barrybites.ci18bdbqfkoj.us-east-1.rds.amazonaws.com";
    conn->ConnectionString = "Server=" + serverName + ";Database = barrybites;User ID = admin; Password = " +
        password + ";";
    conn->Open();
    return conn;
}

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
        if (persistObject->GetType() == List<Food^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Food^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        if (persistObject->GetType() == List<DispensadorDisponible^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<DispensadorDisponible^>::typeid);
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
        if (persistObject->GetType() == List<DispensadorDisponible^>::typeid) {
            List<DispensadorDisponible^>^ dispDispbl = (List<DispensadorDisponible^>^) persistObject;
            for (int i = 0; i < dispDispbl->Count; i++) {
                DispensadorDisponible^ d = dispDispbl[i];
                writer->WriteLine(d);
            }
        }
        if (persistObject->GetType() == List<Dispenser^>::typeid) {
            List<Dispenser^>^ dispDispbl = (List<Dispenser^>^) persistObject;
            for (int i = 0; i < dispDispbl->Count; i++) {
                Dispenser^ d = dispDispbl[i];
                writer->WriteLine(d);
            }
        }
        if (persistObject->GetType() == List<User^>::typeid) {
            List<User^>^ users = (List<User^>^) persistObject;
            for (int i = 0; i < users->Count; i++) {
                User^ u = users[i];
                if (u->HistorialActividades != nullptr) {
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
        /*if (persistObject->GetType() == List<Dispenser^>::typeid) {
            List<Dispenser^>^ dispenser = (List<Dispenser^>^) persistObject;
            for (int i = 0; i < dispenser->Count; i++) {
                Dispenser^ d = dispenser[i];
                writer->WriteLine("{0}|{1}|{2:F1}|{3}|{4:F1}|{5}|{6}|{7}|{8}|{9}",
                    d->Id, d->AssignedTo, d->DispenserFood, d->FeedingSchedule, d->FoodAmount, d->IsPlateFull,d->DispensadorAsignado,d->ComidaAsignada,d->ModoOperacion);
            }
        }*/
        if (persistObject->GetType() == List<Pet^>::typeid) {
            List<Pet^>^ pet = (List<Pet^>^) persistObject;
            for (int i = 0; i < pet->Count; i++) {
                Pet^ p = pet[i];
                String^ weightEvolution = String::Join(";", p->WeightEvolution->ToArray());
                String^ photoBase64 = "";
                if (p->Photo != nullptr) {
                    photoBase64 = Convert::ToBase64String(p->Photo);
                }
                writer->WriteLine("{0}|{1}|{2:F1}|{3}|{4:F1}|{5}|{6}|{7}|{8}|{9}|{10}|{11:F1}|{12}",
                    p->Id, p->Name, p->FoodServing,p->FoodEvolution,p->WaterServing,
                    p->WaterEvolution,p->Owner, p->PetDispenser,
                    photoBase64, p->Specie, p->Status, p->Weight,weightEvolution);
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
/*void BarryPersistance::Persistance::PersistDispensationTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        
        if (persistObject->GetType() == List<Dispensation^>::typeid) {
            List<Dispensation^>^ dispensation = (List<Dispensation^>^) persistObject;
            for (int i = 0; i < dispensation->Count; i++) {
                Dispensation^ di = dispensation[i];
                writer->WriteLine("{0}|{1}",
                    di->Date, di->TimesDispensed);
            }
        }

    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}*/
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
/*
Object^ BarryPersistance::Persistance::LoadDispensationTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<Dispensation^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            Dispensation^ dispensation = gcnew Dispensation();
            dispensation->Date = Convert::ToString(record[0]);
            dispensation->TimesDispensed = Convert::ToInt32(record[1]);
            ((List<Dispensation^>^)result)->Add(dispensation);
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}
*/

void BarryPersistance::Persistance::AddDispensador(int id, DispensadorDisponible^ disp)
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
    dispensador->DispensadorAsignado = disp;
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
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME, lista_dispensadores);
    if (!encontrado) {
        throw gcnew System::Exception("No existe un dispensador con ese ID");
    }
}

Dispenser^ BarryPersistance::Persistance::ConsultarDispensadorPorId(int id)
{
    lista_dispensadores = ConsultarTodosDispensadores();
    for each (Dispenser ^ d in lista_dispensadores) {
        if (d->Id == id) {
            return d;
        }
    }
    return nullptr;
}

void BarryPersistance::Persistance::AddHorarioDispensador(Dispenser^ dispensadorSeleccionado, int horario)
{
    lista_dispensadores = ConsultarTodosDispensadores();
    for (int i = 0; i < lista_dispensadores->Count; i++) {
        Dispenser^ dispensador = lista_dispensadores[i];
        if (dispensador->Id == dispensadorSeleccionado->Id) {
            if (dispensadorSeleccionado->FeedingSchedule->Contains(horario)) {
                throw gcnew System::Exception("Ya se tiene este horario añadido.");
            }
            else {
                dispensadorSeleccionado->FeedingSchedule->Add(horario);
                dispensador->FeedingSchedule = dispensadorSeleccionado->FeedingSchedule;
            }
        }
    }
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME, lista_dispensadores);
    PersistXMLFile(XML_DISPENSADOR_FILE_NAME, lista_dispensadores);

}

void BarryPersistance::Persistance::ActualizarDispensador(Dispenser^ d)
{
    lista_dispensadores = ConsultarTodosDispensadores();
    for (int i = 0; i < lista_dispensadores->Count; i++) {
        Dispenser^ dispensador = lista_dispensadores[i];
        if (dispensador->Id == d->Id) {
            lista_dispensadores[i] = d;
            break;
        }
    }
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME, lista_dispensadores);
    PersistXMLFile(XML_DISPENSADOR_FILE_NAME, lista_dispensadores);
}

void BarryPersistance::Persistance::EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador)
{

    for (int i = 0; i < PetsList->Count; i++) {
        Pet^ m = PetsList[i];
        if (m->PetDispenser == nullptr) {
            m->PetDispenser = gcnew Dispenser();
        }
        if (m->Name == mascota->Name) {
            if (m->PetDispenser->Id == dispensador->Id) {
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

void BarryPersistance::Persistance::AddDipensadorDisponible(DispensadorDisponible^ dispensador)
{
    lista_dispensadores_disponibles->Add(dispensador);
    PersistBinaryFile(BIN_DISPENSADOR_DISPONIBLE_FILE_NAME, lista_dispensadores_disponibles);
    PersistTextFile(TXT_DISPENSADOR_DISPONIBLE_FILE_NAME, lista_dispensadores_disponibles);
    PersistXMLFile(XML_DISPENSADOR_DISPONIBLE_FILE_NAME, lista_dispensadores_disponibles);
}

List<String^>^ BarryPersistance::Persistance::ConsultarMarcas()
{
    lista_dispensadores_disponibles = ConsultarDispensadoresDisponibles();
    List<String^>^ lista_marcas = gcnew List<String^>();
    String^ marca_d="";
    for (int i = 0; i < lista_dispensadores_disponibles->Count;i++) {
        DispensadorDisponible^ d = lista_dispensadores_disponibles[i];
        if (marca_d != d->Marca) {
            lista_marcas->Add(d->Marca);
        }
        marca_d = d->Marca;
    }
    return lista_marcas;
}

List<DispensadorDisponible^>^ BarryPersistance::Persistance::ConsultarDispensadoresDisponibles()
{
    try {
        lista_dispensadores_disponibles = (List<DispensadorDisponible^>^)LoadBinaryFile(BIN_DISPENSADOR_DISPONIBLE_FILE_NAME);
        if (lista_dispensadores_disponibles == nullptr)
            lista_dispensadores_disponibles = gcnew List<DispensadorDisponible^>();
    }
    catch (Exception^ ex) {
    }
    return lista_dispensadores_disponibles;
}

List<String^>^ BarryPersistance::Persistance::ConsultarDispensadorMarca(String^ marca)
{
    List<String^>^ lista_marcas = ConsultarMarcas();
    List<String^>^ resultado = gcnew List<String^>();;
    for each (String ^ m in lista_marcas) {
        if (m->IndexOf(marca, StringComparison::OrdinalIgnoreCase) >= 0) {
            resultado->Add(m);
        }
    }
    return resultado;
}

List<String^>^ BarryPersistance::Persistance::ConsultarModelos(String^ marca)
{
    lista_dispensadores_disponibles = ConsultarDispensadoresDisponibles();
    List<String^>^ lista_modelos = gcnew List<String^>();
    for (int i = 0; i < lista_dispensadores_disponibles->Count; i++) {
        DispensadorDisponible^ d = lista_dispensadores_disponibles[i];
        if (d->Marca == marca) {
            if (!lista_modelos->Contains(d->Modelo)) {
                lista_modelos->Add(d->Modelo);
            }
        }
    }
    return lista_modelos;
}

List<String^>^ BarryPersistance::Persistance::ConsultarDispensadorModelo(String^ modelo,String^ marca)
{
    List<String^>^ lista_modelos = ConsultarModelos(marca);
    List<String^>^ resultado = gcnew List<String^>();;
    for each (String ^ m in lista_modelos) {
        if (m->IndexOf(modelo, StringComparison::OrdinalIgnoreCase) >= 0) {
            resultado->Add(m);
        }
    }
    return resultado;
}

List<String^>^ BarryPersistance::Persistance::ConsultarColores(String^ marca)
{
    lista_dispensadores_disponibles = ConsultarDispensadoresDisponibles();
    List<String^>^ lista_colores = gcnew List<String^>();
    for (int i = 0; i < lista_dispensadores_disponibles->Count; i++) {
        DispensadorDisponible^ d = lista_dispensadores_disponibles[i];
        if (d->Marca == marca) {
            if (!lista_colores->Contains(d->Color)) {
                lista_colores->Add(d->Color);
            }
        }
    }
    return lista_colores;
}

List<String^>^ BarryPersistance::Persistance::ConsultarDispensadorColor(String^ color, String^ marca)
{
    List<String^>^ lista_colores = ConsultarColores(marca);
    List<String^>^ resultado = gcnew List<String^>();;
    for each (String ^ m in lista_colores) {
        if (m->IndexOf(color, StringComparison::OrdinalIgnoreCase) >= 0) {
            resultado->Add(m);
        }
    }
    return resultado;
}

DispensadorDisponible^ BarryPersistance::Persistance::EncontrarDispensador(String^ marca, String^ modelo)
{
    DispensadorDisponible^ dispEncontrado = gcnew DispensadorDisponible();
    lista_dispensadores_disponibles = ConsultarDispensadoresDisponibles();
    for each (DispensadorDisponible^ d in lista_dispensadores_disponibles) {
        if (d->Marca==marca && d->Modelo==modelo) {
            dispEncontrado = d;
            break;
        }
    }
    return dispEncontrado;
}

void BarryPersistance::Persistance::AsignarModoDipensador(Dispenser^ dispensador, String^ modo)
{
    lista_dispensadores = ConsultarTodosDispensadores();
    for each (Dispenser^ d in lista_dispensadores) {
        if (d->Id ==dispensador->Id) {
            d->ModoOperacion = modo;
        }
    }
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME, lista_dispensadores);
    PersistXMLFile(XML_DISPENSADOR_FILE_NAME, lista_dispensadores);
}

Pet^ BarryPersistance::Persistance::ConsultarMascotaAsignadaADispensador(int dispenserId)
{
    //oli
    for (int i = 0; i < PetsList->Count; i++) {
        Pet^ m = PetsList[i];
        if (m->PetDispenser != nullptr) {

            if (m->PetDispenser->Id == dispenserId) {
                return m;
            }
        }
    }
    return nullptr;
}

int BarryPersistance::Persistance::SQLAddPet(Pet^ pet)
{
    int petId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddPet";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@Weight", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@Specie", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@Status", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@FoodServing", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@WaterServing", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@Photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@LastTimeFeD", System::Data::SqlDbType::Char, 8);
        cmd->Parameters->Add("@LastTimeHidrated", System::Data::SqlDbType::Char, 8);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@Name"]->Value = pet->Name;
        cmd->Parameters["@Weight"]->Value = pet->Weight;
        cmd->Parameters["@Specie"]->Value = pet->Specie;
        cmd->Parameters["@Status"]->Value = pet->Status;
        cmd->Parameters["@FoodServing"]->Value = pet->FoodServing;
        cmd->Parameters["@WaterServing"]->Value = pet->WaterServing;
        if (pet->Photo == nullptr)
            cmd->Parameters["@Photo"]->Value = DBNull::Value;
        else
            cmd->Parameters["@Photo"]->Value = pet->Photo;
        if (pet->LastTimeFeD == nullptr)
            cmd->Parameters["@LastTimeFeD"]->Value = DBNull::Value;
        else
            cmd->Parameters["@LastTimeFeD"]->Value = pet->LastTimeFeD;
        if (pet->LastTimeHidrated == nullptr)
            cmd->Parameters["@LastTimeHidrated"]->Value = DBNull::Value;
        else
            cmd->Parameters["@LastTimeHidrated"]->Value = pet->LastTimeHidrated;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        petId = Convert::ToInt32(cmd->Parameters["@Id"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return petId;
}

int BarryPersistance::Persistance::SQLAddWeight(Pet^ pet)
{
    int weightId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddWeight";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@PetId", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@WeightValue", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@DateRecorded", System::Data::SqlDbType::DateTime);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@WeightId", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@PetId"]->Value = pet->Id;
        cmd->Parameters["@WeightValue"]->Value = pet->Weight;
        cmd->Parameters["@DateRecorded"]->Value = DateTime::Now;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        weightId = Convert::ToInt32(cmd->Parameters["@WeightId"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return weightId;
}

int BarryPersistance::Persistance::SQLAddFoodServing(Pet^ pet)
{
    int foodServingId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddFoodServing";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@PetId", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@FoodServingValue", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@DateRecorded", System::Data::SqlDbType::DateTime);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@FoodServingId", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@PetId"]->Value = pet->Id;
        cmd->Parameters["@FoodServingValue"]->Value = pet->FoodServing;
        cmd->Parameters["@DateRecorded"]->Value = DateTime::Now;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        foodServingId = Convert::ToInt32(cmd->Parameters["@FoodServingId"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return foodServingId;
}

int BarryPersistance::Persistance::SQLAddWaterServing(Pet^ pet)
{
    int waterServingId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddWaterServing";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@PetId", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@WaterServingValue", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@DateRecorded", System::Data::SqlDbType::DateTime);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@WaterServingId", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@PetId"]->Value = pet->Id;
        cmd->Parameters["@WaterServingValue"]->Value = pet->WaterServing;
        cmd->Parameters["@DateRecorded"]->Value = DateTime::Now;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        waterServingId = Convert::ToInt32(cmd->Parameters["@WaterServingId"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return waterServingId;
}

List<Pet^>^ BarryPersistance::Persistance::SQLQueryAllPets()
{
    List<Pet^>^ SQLpetsList = gcnew List<Pet^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllPets";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Pet^ pet = gcnew Pet();
            pet->Id = Convert::ToInt32(reader["Id"]->ToString());
            pet->Name = reader["Name"]->ToString();
            pet->Weight = Convert::ToDouble(reader["Weight"]->ToString());
            pet->Specie = reader["Specie"]->ToString();
            pet->Status = reader["Status"]->ToString();
            pet->FoodServing = Convert::ToDouble(reader["FoodServing"]->ToString());
            pet->WaterServing = Convert::ToDouble(reader["WaterServing"]->ToString());
            if (!DBNull::Value->Equals(reader["LastTimeFeD"]))
                pet->LastTimeFeD = Convert::ToString(reader["LastTimeFeD"]);
            if (!DBNull::Value->Equals(reader["LastTimeHidrated"]))
                pet->LastTimeHidrated = Convert::ToString(reader["LastTimeHidrated"]);
            if (!DBNull::Value->Equals(reader["Photo"]))
                pet->Photo = (array<Byte>^)reader["Photo"];
            SQLpetsList->Add(pet);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return SQLpetsList;
}

Pet^ BarryPersistance::Persistance::SQLQueryWeightEvolutionByPetId(int petId)
{
    Pet^ pet = SQLQueryPetById(petId);
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD

        conn = GetConnection();
        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryWeightEvolutionByPetId";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@PetId", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@PetId"]->Value = petId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            double weight = Convert::ToDouble(reader["WeightValue"]->ToString());
            DateTime record_date = Convert::ToDateTime(reader["DateRecorded"]->ToString());
            pet->WeightEvolution->Add(weight);
            pet->WeightChanges->Add(record_date);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return pet;
}

Pet^ BarryPersistance::Persistance::SQLQueryFoodServingEvolutionByPetId(int petId)
{
    Pet^ pet = SQLQueryPetById(petId);
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryFoodServingEvolutionByPetId";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@PetId", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@PetId"]->Value = petId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            double food = Convert::ToDouble(reader["FoodServingValue"]->ToString());
            DateTime date = Convert::ToDateTime(reader["DateRecorded"]->ToString());
            pet->FoodEvolution->Add(food);
            pet->FoodChanges->Add(date);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return pet;
}

Pet^ BarryPersistance::Persistance::SQLQueryWaterServingEvolutionByPetId(int petId)
{
    Pet^ pet = SQLQueryPetById(petId);
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryWaterServingEvolutionByPetId";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@PetId", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@PetId"]->Value = petId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            double water = Convert::ToDouble(reader["WaterServingValue"]->ToString());
            DateTime date = Convert::ToDateTime(reader["DateRecorded"]->ToString());
            pet->WaterEvolution->Add(water);
            pet->WaterChanges->Add(date);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return pet;
}

int BarryPersistance::Persistance::SQLUpdatePet(Pet^ pet)
{
    int petId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_UpdatePet";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@Weight", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@Specie", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@Status", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@FoodServing", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@WaterServing", System::Data::SqlDbType::Float);
        cmd->Parameters->Add("@Photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@LastTimeFeD", System::Data::SqlDbType::Char, 8);
        cmd->Parameters->Add("@LastTimeHidrated", System::Data::SqlDbType::Char, 8);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = pet->Id;
        cmd->Parameters["@Name"]->Value = pet->Name;
        cmd->Parameters["@Weight"]->Value = pet->Weight;
        cmd->Parameters["@Specie"]->Value = pet->Specie;
        cmd->Parameters["@Status"]->Value = pet->Status;
        cmd->Parameters["@FoodServing"]->Value = pet->FoodServing;
        cmd->Parameters["@WaterServing"]->Value = pet->WaterServing;
        if (pet->Photo == nullptr)
            cmd->Parameters["@Photo"]->Value = DBNull::Value;
        else
            cmd->Parameters["@Photo"]->Value = pet->Photo;
        if (pet->LastTimeFeD == nullptr)
            cmd->Parameters["@LastTimeFeD"]->Value = DBNull::Value;
        else
            cmd->Parameters["@LastTimeFeD"]->Value = pet->LastTimeFeD;
        if (pet->LastTimeHidrated == nullptr)
            cmd->Parameters["@LastTimeHidrated"]->Value = DBNull::Value;
        else
            cmd->Parameters["@LastTimeHidrated"]->Value = pet->LastTimeHidrated;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int BarryPersistance::Persistance::SQLDeletePet(int petId)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeletePet";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = petId;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

Pet^ BarryPersistance::Persistance::SQLQueryPetById(int petId)
{
    Pet^ pet;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryPetById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = petId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            pet = gcnew Pet();
            pet->Id = Convert::ToInt32(reader["Id"]->ToString());
            pet->Name = reader["Name"]->ToString();
            pet->Weight = Convert::ToDouble(reader["Weight"]->ToString());
            pet->Specie = reader["Specie"]->ToString();
            pet->Status = reader["Status"]->ToString();
            pet->FoodServing = Convert::ToDouble(reader["FoodServing"]->ToString());
            pet->WaterServing = Convert::ToDouble(reader["WaterServing"]->ToString());
            if (!DBNull::Value->Equals(reader["LastTimeFeD"]))
                pet->LastTimeFeD = Convert::ToString(reader["LastTimeFeD"]);
            if (!DBNull::Value->Equals(reader["LastTimeHidrated"]))
                pet->LastTimeHidrated = Convert::ToString(reader["LastTimeHidrated"]);
            if (!DBNull::Value->Equals(reader["Photo"]))
                pet->Photo = (array<Byte>^)reader["Photo"];
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return pet;
}

void BarryPersistance::Persistance::AddDispensadorPorMascota(Pet^ mascotaSeleccionada, Dispenser^ DispensadorSeleccionado)
{
    mascotaSeleccionada->PetDispenser = gcnew Dispenser();
    for (int i = 0; i < PetsList->Count; i++) {
        Pet^ m = PetsList[i];
        if (m->PetDispenser == nullptr) {
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
    for (int i = 0; i < lista_dispensadores->Count; i++) {
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
