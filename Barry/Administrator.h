#pragma once
#include "User.h";
//#include "InternalUser.h"
//#include "PortalUser.h"
//#include "Pet.h";
using namespace System;

namespace Barry {
    public ref class Administrator : public User {
    public:
        //;
        //static void ActualizarMascota(int);
        //static bool AddIUser(InternalUser^);
        //static bool EditPermissions(InternalUser^,PortalUser^);
        //static bool AddPUsers(PortalUser^);
        Administrator(int id, String^ name, String^ password, String^ role, int phoneNumber)
            : User(id, name, password, role, phoneNumber) {}
    };
}