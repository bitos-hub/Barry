//ok

#pragma once
#include "User.h"
using namespace System;

namespace Barry {
    [Serializable] public ref class PortalUser : public User {
    public:
        bool CheckReport;
        bool CheckGeneralReport;
        PortalUser(){}
        PortalUser(int id, String^ name, String^ password, String^ role, int phoneNumber)
            : User(id, name, password, role, phoneNumber) {}
    };
}