/**
 * Project Untitled
 */


#pragma once
#include "Dispenser.h"
#include "Food.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    public ref class Users {
    public:
        int Id;
        String^ Name;
        String^ Password;
        String^ Role;
        int PhoneNumber;
        bool ProfileStatus;
        List<String^>^ HistorialActividades;

        /**
         * @param SistemaDeAlimentacion^
         * @param Dispenser^
         * @param Pets^
         * @param Food^
         */
        void ConfigureSystem(Dispenser^, Food^);

        bool CheckReport();

        bool CheckGeneralReport();
    };
}