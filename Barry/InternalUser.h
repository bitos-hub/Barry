#pragma once
#include "User.h"

using namespace System;

namespace Barry {
    [Serializable] public ref class InternalUser : public User {
    public:
        bool EditSchedule;
        bool EditFood;
        bool CheckReport;
        bool CheckGeneralReport;
        InternalUser(){}
        InternalUser(int id, String^ name, String^ password, String^ role, int phoneNumber)
            : User(id, name, password, role, phoneNumber) {}
    };
}