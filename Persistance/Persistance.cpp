#include "pch.h"

#include "Persistance.h"
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;

SqlConnection^ BarryPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "a6ffcWnZ8esY";
    String^ serverName = "200.16.7.140";
    conn->ConnectionString = "Server=" + serverName + ";Database = a20220433;User ID = a20220433; Password = " +
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
    // TODO: Insertar una instrucci�n "return" aqu�
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

int BarryPersistance::Persistance::AddDispensador(DispensadorDisponible^ disp)
{
    /*Dispenser^ dispensador = gcnew Dispenser();
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
    PersistXMLFile(XML_DISPENSADOR_FILE_NAME, lista_dispensadores);*/
    if (disp == nullptr || disp->Id <= 0) {
        throw gcnew System::Exception("No se seleccion� un dispensador disponible v�lido.");
    }
    int DispensadorId = 0;
    SqlConnection^ conn;
    try {
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        /*
        //--------------------------------------------------------------
        cmd->Parameters->Add("@IsPlateFull", System::Data::SqlDbType::Bit);
        cmd->Parameters->Add("@DispenserFood", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@DispenserFood"]->Precision = 10;
        cmd->Parameters["@DispenserFood"]->Scale = 2;
        cmd->Parameters->Add("@FoodAmount", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@FoodAmount"]->Precision = 10;
        cmd->Parameters["@FoodAmount"]->Scale = 2;
        //CAMPOS DEL MICRO ----------------------------------------------

        cmd->Parameters->Add("@ModoOperacion", System::Data::SqlDbType::VarChar, 50);*/
        cmd->Parameters->Add("@IdDispensadorDisponible", System::Data::SqlDbType::Int);
        //cmd->Parameters->Add("@IdComidaAsignada", System::Data::SqlDbType::Int);
        //cmd->Parameters->Add("@IdHorarios", System::Data::SqlDbType::Int);
        //cmd->Parameters->Add("@IdDispensationRecord", System::Data::SqlDbType::Int);

        SqlParameter^ outputIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@IdDispensadorDisponible"]->Value = disp->Id;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        DispensadorId = Convert::ToInt32(cmd->Parameters["@Id"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return DispensadorId;
}


List<Dispenser^>^ BarryPersistance::Persistance::ConsultarTodosDispensadores()
{
    /*try {
        //lista_dispensadores = (List<Dispenser^>^)LoadBinaryFile(BIN_DISPENSADOR_FILE_NAME);
        if (lista_dispensadores == nullptr)
            lista_dispensadores = gcnew List<Dispenser^>();
    }
    catch (FileNotFoundException^ ex) {
    }
    return lista_dispensadores;*/
    List<Dispenser^>^ lista_dispen = gcnew List<Dispenser^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    int id_dispensador_disp;
    int id_dispensation_record;
    int id_comida;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_ConsultarTodosDispensadores";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Dispenser^ dispensador = gcnew Dispenser();
            dispensador->Id = Convert::ToInt32(reader["Id"]->ToString());
            dispensador->FoodAmount = Convert::ToDouble(reader["FoodAmount"]->ToString());
            dispensador->IsPlateFull = Convert::ToBoolean(reader["IsPlateFull"]->ToString());
            dispensador->DispenserFood = Convert::ToDouble(reader["DispenserFood"]->ToString());
            dispensador->ModoOperacion = (reader["ModoOperacion"]->ToString());
            id_dispensador_disp = Convert::ToInt32(reader["IdDispensadorDisponible"]->ToString());
            dispensador->DispensadorAsignado = ConsultarDispensadorDisponiblePorId(id_dispensador_disp);
            id_comida = Convert::ToInt32(reader["IdComidaAsignada"]->ToString());
            dispensador->ComidaAsignada = SQLQueryFoodById(id_comida);
            //dispensador->FeedingSchedule = ConsultarHorariosPorIdDispensador(dispensador->Id);
            //dispensador->dispensationRecord = ConsultarDispensadasPorIdDispensador(dispensador->Id);
            lista_dispen->Add(dispensador);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return lista_dispen;
}
int BarryPersistance::Persistance::EliminarDispensador(int id)
{
    /*lista_dispensadores = ConsultarTodosDispensadores();
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
    }*/
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_EliminarDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = id;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

Dispenser^ BarryPersistance::Persistance::ConsultarDispensadorPorId(int id)
{
    /*lista_dispensadores = ConsultarTodosDispensadores();
    for each (Dispenser ^ d in lista_dispensadores) {
        if (d->Id == id) {
            return d;
        }
    }
    return nullptr;*/
    Dispenser^ d;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_ConsultarDispensadorPorId";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = id;

        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            d = gcnew Dispenser();
            d->Id = Convert::ToInt32(reader["Id"]->ToString());
            int id_disp_disp = Convert::ToInt32(reader["IdDispensadorDisponible"]->ToString());
            d->DispensadorAsignado = ConsultarDispensadorDisponiblePorId(id_disp_disp);
            int id_comida_asignada = Convert::ToInt32(reader["IdComidaAsignada"]->ToString());
            d->ComidaAsignada = SQLQueryFoodById(id_comida_asignada);
            d->ModoOperacion = reader["ModoOperacion"]->ToString();
            int id_disp_record = Convert::ToInt32(reader["IdDispensationRecord"]->ToString());
            d->dispensationRecord = ConsultarDispensadasPorIdDispensador(id);
            d->IsPlateFull = Convert::ToBoolean(reader["IsPlateFull"]->ToString());
            d->DispenserFood = Convert::ToDouble(reader["DispenserFood"]->ToString());
            d->FoodAmount = Convert::ToDouble(reader["FoodAmount"]->ToString());
            d->FeedingSchedule = ConsultarHorariosPorIdDispensador(id);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return d;
}

void BarryPersistance::Persistance::AddHorarioDispensador(Dispenser^ dispensadorSeleccionado, int horario)
{
    /*lista_dispensadores = ConsultarTodosDispensadores();
    for (int i = 0; i < lista_dispensadores->Count; i++) {
        Dispenser^ dispensador = lista_dispensadores[i];
        if (dispensador->Id == dispensadorSeleccionado->Id) {
            if (dispensadorSeleccionado->FeedingSchedule->Contains(horario)) {
                throw gcnew System::Exception("Ya se tiene este horario a�adido.");
            }
            else {
                dispensadorSeleccionado->FeedingSchedule->Add(horario);
                dispensador->FeedingSchedule = dispensadorSeleccionado->FeedingSchedule;
            }
        }
        ActualizarDispensador(dispensador);
    }*/
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_AddHorarioDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Horario", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@IdDispensador", System::Data::SqlDbType::Int);
        cmd->Prepare();
        try {
            cmd->Parameters["@Horario"]->Value = horario;
            cmd->Parameters["@IdDispensador"]->Value = dispensadorSeleccionado->Id;
        }
        catch (SqlException^ e) {
            throw e;
        }
        
        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }

    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
}

void BarryPersistance::Persistance::AgregarDispensadasPorDispensador(int idDispensador, Dispensation^ dispensada)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_AddDispensadasPorDisp";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DispensedDate", System::Data::SqlDbType::VarChar,10);
        cmd->Parameters->Add("@idDispenser", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@timesDispensedFood", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@timesDispensedWater", System::Data::SqlDbType::Int);
        cmd->Prepare();
     
        cmd->Parameters["@DispensedDate"]->Value = dispensada->Date;
        cmd->Parameters["@idDispenser"]->Value = idDispensador;
        cmd->Parameters["@timesDispensedFood"]->Value = dispensada->TimesDispensedFood;
        cmd->Parameters["@timesDispensedWater"]->Value = dispensada->TimesDispensedWater;
 
        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }

    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
}

void BarryPersistance::Persistance::ActualizarDispensadasPorDispensador(int idDispensasor, Dispensation^ dispensada)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_ActualizarDispensadasPorDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DispensedDate", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@idDispenser", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@timesDispensedFood", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@timesDispensedWater", System::Data::SqlDbType::Int);
        cmd->Prepare();
        try {
            cmd->Parameters["@DispensedDate"]->Value = dispensada->Date;
            cmd->Parameters["@idDispenser"]->Value = idDispensasor;
            cmd->Parameters["@timesDispensedFood"]->Value = dispensada->TimesDispensedFood;
            cmd->Parameters["@timesDispensedWater"]->Value = dispensada->TimesDispensedWater;
        }
        catch (SqlException^ e) {
            throw e;
        }

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }

    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
}

Dispenser^ BarryPersistance::Persistance::ConsultarDispensadorPorMascota(int id)
{
    Dispenser^ dispensador;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    int id_dispensador = 0;
    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_ConsultarDispensadorPorMascota";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@IdMascota", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@IdMascota"]->Value = id;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            dispensador = gcnew Dispenser();
            id_dispensador = Convert::ToInt32(reader["IdDispensador"]->ToString());
            dispensador = ConsultarDispensadorPorId(id_dispensador);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return dispensador;
}

int BarryPersistance::Persistance::ActualizarDispensador(Dispenser^ d)
{
    /*lista_dispensadores = ConsultarTodosDispensadores();
    for (int i = 0; i < lista_dispensadores->Count; i++) {
        Dispenser^ dispensador = lista_dispensadores[i];
        if (dispensador->Id == d->Id) {
            lista_dispensadores[i] = d;
            break;
        }
    }
    PersistBinaryFile(BIN_DISPENSADOR_FILE_NAME, lista_dispensadores);
    PersistXMLFile(XML_DISPENSADOR_FILE_NAME, lista_dispensadores);*/
    int dispensadorId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_ActualizarDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@IsPlateFull", System::Data::SqlDbType::Bit);
        cmd->Parameters->Add("@DispenserFood", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@DispenserFood"]->Precision = 10;
        cmd->Parameters["@DispenserFood"]->Scale = 2;
        cmd->Parameters->Add("@FoodAmount", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@FoodAmount"]->Precision = 10;
        cmd->Parameters["@FoodAmount"]->Scale = 2;
        //CAMPOS DEL MICRO ----------------------------------------------

        cmd->Parameters->Add("@ModoOperacion", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@IdDispensadorDisponible", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@IdComidaAsignada", System::Data::SqlDbType::Int);
        //cmd->Parameters->Add("@IdDispensationRecord", System::Data::SqlDbType::Int);

        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = d->Id;
        cmd->Parameters["@IsPlateFull"]->Value = d->IsPlateFull;
        cmd->Parameters["@DispenserFood"]->Value = d->DispenserFood;
        cmd->Parameters["@FoodAmount"]->Value = d->FoodAmount;
        cmd->Parameters["@ModoOperacion"]->Value = d->ModoOperacion;
        cmd->Parameters["@IdDispensadorDisponible"]->Value = d->DispensadorAsignado->Id;
        if (d->ComidaAsignada != nullptr) {
            cmd->Parameters["@IdComidaAsignada"]->Value = d->ComidaAsignada->Id;
        }
        else cmd->Parameters["@IdComidaAsignada"]->Value = 0;
        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

void BarryPersistance::Persistance::EliminarDispensadorPorMascota(Pet^ mascota, Dispenser^ dispensador)
{
    /*for (int i = 0; i < PetsList->Count; i++) {
        Pet^ m = PetsList[i];
        if (m->PetDispenser == nullptr) {
            m->PetDispenser = gcnew Dispenser();
        }
        if (m->Name == mascota->Name) {
            if (m->PetDispenser->Id == dispensador->Id) {
                m->PetDispenser->Id = 0;
            }
            else {
                throw gcnew System::Exception("La mascota no est� asignada a este dispensador.");
            }
        }

    }
    PersistBinaryFile(BIN_PET_FILE_NAME, PetsList);
    PersistXMLFile(XML_PET_FILE_NAME, PetsList);*/
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_EliminarDispensadorPorMascota";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@IdDispensador", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@IdMascota", System::Data::SqlDbType::Int);
        cmd->Prepare();
        try {
            cmd->Parameters["@IdDispensador"]->Value = dispensador->Id;
            cmd->Parameters["@IdMascota"]->Value = mascota->Id;
        }
        catch (SqlException^ e) {
            throw e;
        }
        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

List<int>^ BarryPersistance::Persistance::ConsultarHorariosPorIdDispensador(int id)
{
    List<int>^ lista_horarios = gcnew List<int>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexi�n a la BD

        conn = GetConnection();
        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_ConsultarHorariosPorIdDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DispensadorId", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@DispensadorId"]->Value = id;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            int horario = Convert::ToInt32(reader["Horario"]->ToString());
            lista_horarios->Add(horario);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return lista_horarios;
}

List<Dispensation^>^ BarryPersistance::Persistance::ConsultarDispensadasPorIdDispensador(int id)
{
    List<Dispensation^>^ lista_dispensadas = gcnew List<Dispensation^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexi�n a la BD

        conn = GetConnection();
        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_ConsultarDispensadasPorIdDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@idDispenser", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@idDispenser"]->Value = id;
        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Dispensation^ dispensadas = gcnew Dispensation();
            dispensadas->Date = (reader["DispensedDate"]->ToString());
            dispensadas->TimesDispensedFood = Convert::ToInt32(reader["TimesDispensedFood"]->ToString());
            dispensadas->TimesDispensedWater = Convert::ToInt32(reader["TimesDispensedWater"]->ToString());
            lista_dispensadas->Add(dispensadas);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return lista_dispensadas;
}

void BarryPersistance::Persistance::ActualizarDipensadas(int dispensadorId, Dispensation^ disp)
{

    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_ActualizarDispensadasPorDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DispensedDate", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@idDispenser", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@timesDispensedFood", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@timesDispensedWater", System::Data::SqlDbType::Int);
        cmd->Prepare();
        try {
            cmd->Parameters["@DispensedDate"]->Value = disp->Date;
            cmd->Parameters["@idDispenser"]->Value = dispensadorId;
            cmd->Parameters["@timesDispensedFood"]->Value = disp->TimesDispensedFood;
            cmd->Parameters["@timesDispensedWater"]->Value = disp->TimesDispensedWater;
        }
        catch (SqlException^ e) {
            throw e;
        }
        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }

    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
}

int BarryPersistance::Persistance::AddDipensadorDisponible(DispensadorDisponible^ dispensador)
{
    /*lista_dispensadores_disponibles->Add(dispensador);
    PersistBinaryFile(BIN_DISPENSADOR_DISPONIBLE_FILE_NAME, lista_dispensadores_disponibles);
    PersistTextFile(TXT_DISPENSADOR_DISPONIBLE_FILE_NAME, lista_dispensadores_disponibles);
    PersistXMLFile(XML_DISPENSADOR_DISPONIBLE_FILE_NAME, lista_dispensadores_disponibles);
    */
    int Disp_DispensadorId  = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        //String^ sqlStr = "INSERT INTO ROBOT_WAITER(name, brand, model, speed, load_capacity, "+
        //    "status) VALUES('" + 
        //    robot->Name + "','" + robot->Brand + "','" + robot->Model + "'," + robot->Speed + "," +
        //    robot->LoadCapacity + ",'A')";
        String^ sqlStr = "dbo.usp_AddDispensadorDisponible";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Marca", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@Modelo", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@Color", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@Largo", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@Largo"]->Precision = 10;
        cmd->Parameters["@Largo"]->Scale = 2;
        cmd->Parameters->Add("@Ancho", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@Ancho"]->Precision = 10;
        cmd->Parameters["@Ancho"]->Scale = 2;
        cmd->Parameters->Add("@Alto", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@Alto"]->Precision = 10;
        cmd->Parameters["@Alto"]->Scale = 2;
        cmd->Parameters->Add("@Capacidad", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@Material", System::Data::SqlDbType::VarChar, 80);
        cmd->Parameters->Add("@FuenteDeAlimentacion", System::Data::SqlDbType::VarChar, 80);
       
        SqlParameter^ outputIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@Marca"]->Value = dispensador->Marca;
        cmd->Parameters["@Modelo"]->Value = dispensador->Modelo;
        cmd->Parameters["@Color"]->Value = dispensador->Color;
        cmd->Parameters["@Largo"]->Value = dispensador->Largo;
        cmd->Parameters["@Ancho"]->Value = dispensador->Ancho;
        cmd->Parameters["@Alto"]->Value = dispensador->Alto;
        cmd->Parameters["@Capacidad"]->Value = dispensador->Capacidad;
        cmd->Parameters["@Material"]->Value = dispensador->Material;
        cmd->Parameters["@FuenteDeAlimentacion"]->Value = dispensador->FuenteAlimentacion;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        Disp_DispensadorId = Convert::ToInt32(cmd->Parameters["@Id"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return Disp_DispensadorId;

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
   /* try {
        lista_dispensadores_disponibles = (List<DispensadorDisponible^>^)LoadBinaryFile(BIN_DISPENSADOR_DISPONIBLE_FILE_NAME);
        if (lista_dispensadores_disponibles == nullptr)
            lista_dispensadores_disponibles = gcnew List<DispensadorDisponible^>();
    }
    catch (Exception^ ex) {
    }
    */
    List<DispensadorDisponible^>^ lista_dispensadores_disponibles = gcnew List<DispensadorDisponible^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_ConsultarDispensadoresDisponibles";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            DispensadorDisponible^ dispDispenser = gcnew DispensadorDisponible();
            dispDispenser->Id = Convert::ToInt32(reader["Id"]->ToString());
            dispDispenser->Marca= reader["Marca"]->ToString();
            dispDispenser->Modelo = reader["Modelo"]->ToString();
            dispDispenser->Color = reader["Color"]->ToString();
            dispDispenser->Largo = Convert::ToDouble(reader["Largo"]->ToString());
            dispDispenser->Ancho = Convert::ToDouble(reader["Ancho"]->ToString());
            dispDispenser->Alto = Convert::ToDouble(reader["Alto"]->ToString());
            dispDispenser->Capacidad = reader["Capacidad"]->ToString();
            dispDispenser->Material = reader["Material"]->ToString();
            dispDispenser->FuenteAlimentacion = reader["FuenteDeAlimentacion"]->ToString();
            lista_dispensadores_disponibles->Add(dispDispenser);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
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
        if (String::Compare(d->Marca->Trim(), marca->Trim(), true) == 0 &&
            String::Compare(d->Modelo->Trim(), modelo->Trim(), true) == 0) {
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
            ActualizarDispensador(d);
        }
    }
}

Pet^ BarryPersistance::Persistance::ConsultarMascotaAsignadaADispensador(int dispenserId)
{
    //oli
    /*
    for (int i = 0; i < PetsList->Count; i++) {
        Pet^ m = PetsList[i];
        if (m->PetDispenser != nullptr) {

            if (m->PetDispenser->Id == dispenserId) {
                return m;
            }
        }
    }
    return nullptr;*/
    Pet^ mascota;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    int id_mascota = 0;

    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_ConsultarMascotaAsignadaADispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@IdDispensador", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@IdDispensador"]->Value = dispenserId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            mascota = gcnew Pet();
            id_mascota = Convert::ToInt32(reader["IdMascota"]->ToString());
            mascota = SQLQueryPetById(id_mascota);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return mascota;
}

int BarryPersistance::Persistance::SQLAddPet(Pet^ pet)
{
    int petId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
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
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return petId;
}

int BarryPersistance::Persistance::SQLAddWeight(Pet^ pet)
{
    int weightId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
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
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return weightId;
}

int BarryPersistance::Persistance::SQLAddFoodServing(Pet^ pet)
{
    int foodServingId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
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
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return foodServingId;
}

int BarryPersistance::Persistance::SQLAddWaterServing(Pet^ pet)
{
    int waterServingId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
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
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
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
        //Paso 1: Obtener la conexi�n a la BD
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
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
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
        //Paso 1: Obtener la conexi�n a la BD

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
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
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
        //Paso 1: Obtener la conexi�n a la BD
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
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
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
        //Paso 1: Obtener la conexi�n a la BD
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
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
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
        //Paso 1: Obtener la conexi�n a la BD
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
        //Paso 1: Obtener la conexi�n a la BD
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
        //Paso 1: Obtener la conexi�n a la BD
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
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return pet;
}

int BarryPersistance::Persistance::SQLAddFood(Food^ food)
{
    int foodId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddFood";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@FOOD_BRAND", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@FOOD_PRICE", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@FOOD_PRICE"]->Precision = 10;
        cmd->Parameters["@FOOD_PRICE"]->Scale = 2;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::VarChar, 1);
        cmd->Parameters->Add("@FOOD_AMOUNT", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@FOOD_AMOUNT"]->Precision = 10;
        cmd->Parameters["@FOOD_AMOUNT"]->Scale = 2;
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@FOOD_BRAND"]->Value = food->FoodBrand;
        cmd->Parameters["@FOOD_PRICE"]->Value = food->FoodPrice;
        cmd->Parameters["@NAME"]->Value = food->Name;
        cmd->Parameters["@STATUS"]->Value = food->Status;
        cmd->Parameters["@FOOD_AMOUNT"]->Value = food->FoodAmount;
       

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        foodId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return foodId;
}

int BarryPersistance::Persistance::SQLdDeleteFood(int foodId)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteFood";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = foodId;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int BarryPersistance::Persistance::SQLUpdateFood(Food^ food)
{
    int foodId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_ActualizarComida";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@FOOD_BRAND", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@FOOD_PRICE", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@FOOD_PRICE"]->Precision = 10;
        cmd->Parameters["@FOOD_PRICE"]->Scale = 2;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::VarChar, 1);
        cmd->Parameters->Add("@FOOD_AMOUNT", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@FOOD_AMOUNT"]->Precision = 10;
        cmd->Parameters["@FOOD_AMOUNT"]->Scale = 2;
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = food->Id;
        cmd->Parameters["@FOOD_BRAND"]->Value = food->FoodBrand;
        cmd->Parameters["@FOOD_PRICE"]->Value = food->FoodPrice;
        cmd->Parameters["@NAME"]->Value = food->Name;
        cmd->Parameters["@STATUS"]->Value = food->Status;
        cmd->Parameters["@FOOD_AMOUNT"]->Value = food->FoodAmount;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

List<Food^>^ BarryPersistance::Persistance::SQLQueryAllFoods()
{
    List<Food^>^ foodList = gcnew List<Food^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_QueryAllFoods";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Food^ food = gcnew Food();
            food->Id = Convert::ToInt32(reader["ID"]->ToString());
            food->FoodBrand= (reader["FOOD_BRAND"]->ToString());
            food->FoodPrice = Convert::ToDouble(reader["FOOD_PRICE"]->ToString());
            food->Name= (reader["NAME"]->ToString());
            food->Status = (reader["STATUS"]->ToString());
            food->FoodAmount= Convert::ToDouble(reader["FOOD_AMOUNT"]->ToString());
            
            foodList->Add(food);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return foodList;
}

Food^ BarryPersistance::Persistance::SQLQueryFoodById(int foodId)
{
    Food^ food;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_QueryFoodById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = foodId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();
        
        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            food = gcnew Food();
            food->Id = Convert::ToInt32(reader["ID"]->ToString());
            food->FoodBrand = (reader["FOOD_BRAND"]->ToString());
            food->FoodPrice = Convert::ToDouble(reader["FOOD_PRICE"]->ToString());
            food->Name = (reader["NAME"]->ToString());
            food->Status = (reader["STATUS"]->ToString());
            food->FoodAmount = Convert::ToDouble(reader["FOOD_AMOUNT"]->ToString());
           
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return food;
}

void BarryPersistance::Persistance::AddDispensadorPorMascota(Pet^ mascotaSeleccionada, Dispenser^ DispensadorSeleccionado)
{
    /*mascotaSeleccionada->PetDispenser = gcnew Dispenser();
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
    PersistXMLFile(XML_PET_FILE_NAME, PetsList);*/
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_AddDispensadorPorMascota";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@IdDispensador", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@IdMascota", System::Data::SqlDbType::Int);
        cmd->Prepare();
        try {
            cmd->Parameters["@IdDispensador"]->Value = DispensadorSeleccionado->Id;
            cmd->Parameters["@IdMascota"]->Value = mascotaSeleccionada->Id;
        }
        catch (SqlException^ e) {
            throw e;
        }
        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

void BarryPersistance::Persistance::EliminarHorarioDispensador(Dispenser^ dispensador, int horario)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_EliminarHorarioDispens";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@IdDispensador", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@Horario", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@IdDispensador"]->Value = dispensador->Id;
        cmd->Parameters["@Horario"]->Value = horario;
        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

int BarryPersistance::Persistance::AddUsuario(User^ user)
{
    int userId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi�n a la BD
        conn = GetConnection();

        String^ sqlStr = "dbo.usp_AddUser";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        /*
         @Name VARCHAR(50),
    @Password VARCHAR(100),
    @Role VARCHAR(30),
    @PhoneNumber INT,
    @Id INT OUT
        */
        cmd->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@Password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@Role", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@PhoneNumber", System::Data::SqlDbType::Int);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@Name"]->Value = user->Name;
        cmd->Parameters["@Password"]->Value = user->Password;
        cmd->Parameters["@Role"]->Value = user->Role;
        cmd->Parameters["@PhoneNumber"]->Value = user->PhoneNumber;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        userId = Convert::ToInt32(cmd->Parameters["@Id"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return userId;
}

int BarryPersistance::Persistance::ActualizarUsuario(User^ user)
{
    int userId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_UpdateUser";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@Password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@Role", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@PhoneNumber", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = user->Id;
        cmd->Parameters["@Name"]->Value = user->Name;
        cmd->Parameters["@Password"]->Value = user->Password;
        cmd->Parameters["@Role"]->Value = user->Role;
        cmd->Parameters["@PhoneNumber"]->Value = user->PhoneNumber;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int BarryPersistance::Persistance::EliminarUsuario(int id)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteUser";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = id;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

List<User^>^ BarryPersistance::Persistance::ConsultarTodosUsuarios()
{
    List<User^>^ usersList = gcnew List<User^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_QueryAllUsers";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            User^ user = gcnew User();
            user->Id = Convert::ToInt32(reader["Id"]->ToString());
            user->Name = reader["Name"]->ToString();
            user->Password = reader["Password"]->ToString();
            user->Role = reader["Role"]->ToString();
            user->PhoneNumber = Convert::ToInt32(reader["PhoneNumber"]->ToString());
            usersList->Add(user);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return usersList;
}

int BarryPersistance::Persistance::AddModoOperacionDispensador(int id, String^ ModoOperacion)
{
    SqlConnection^ conn;
    try {
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddModoOperacionDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ModoOperacion", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters["@Id"]->Value = id;
        cmd->Parameters["@ModoOperacion"]->Value = ModoOperacion;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int BarryPersistance::Persistance::AddComidaDispensador(int id, Food^ comida)
{
    SqlConnection^ conn;
    try {
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddComidaDispensador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@IdComidaAsignada", System::Data::SqlDbType::Int);
        cmd->Parameters["@Id"]->Value = id;
        cmd->Parameters["@IdComidaAsignada"]->Value = comida->Id;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexi�n de la BD.
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

DispensadorDisponible^ BarryPersistance::Persistance::ConsultarDispensadorDisponiblePorId(int id)
{
    DispensadorDisponible^ dispDispenser;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexi�n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_ConsultarDDPorId";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = id;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            dispDispenser = gcnew DispensadorDisponible();
            dispDispenser->Id = Convert::ToInt32(reader["Id"]->ToString());
            dispDispenser->Marca = reader["Marca"]->ToString();
            dispDispenser->Modelo = reader["Modelo"]->ToString();
            dispDispenser->Color = reader["Color"]->ToString();
            dispDispenser->Largo = Convert::ToDouble(reader["Largo"]->ToString());
            dispDispenser->Ancho = Convert::ToDouble(reader["Ancho"]->ToString());
            dispDispenser->Alto = Convert::ToDouble(reader["Alto"]->ToString());
            dispDispenser->Capacidad = reader["Capacidad"]->ToString();
            dispDispenser->Material = reader["Material"]->ToString();
            dispDispenser->FuenteAlimentacion = reader["FuenteDeAlimentacion"]->ToString();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi�n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return dispDispenser;
}


