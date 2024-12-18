//ok
#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    [Serializable] public ref class User {
    public:
        int Id;
        String^ Name;
        String^ Password;
        String^ Role;
        int PhoneNumber;
        List<String^>^ HistorialActividades;
        bool ProfileStatus;
    public:
        User() {}
        User(int id, String^ name, String^ password, String^ role, int phoneNumber){
            Id = id;
            Name = name;
            Password = password;
            Role = role;
            PhoneNumber = phoneNumber;
        }
          //  : Id(id), Name(name), Password(password), Role(role), PhoneNumber(phoneNumber) ;

        
        bool CheckReport();

        bool CheckGeneralReport();
    };
}