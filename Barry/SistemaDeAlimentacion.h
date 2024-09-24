/**
 * Project Untitled
 */


#pragma once
#include "Users.h"
#include "Pets.h"
#include "Dispenser.h"
#include "Report.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    public ref class SistemaDeAlimentacion {
    public:
        List<Users^>^ Usuarios;
        List<Pets^>^ Mascotas;
        List<Dispenser^>^ Dispensadores;

        /**
         * @param Dispenser^
         */
        void ControllDispenser(Dispenser^);

        /**
         * @param Report^
         * @param Dispenser^
         */
        void GenerateReport(Report^, Dispenser^);
    };
}