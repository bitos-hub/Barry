/**
 * Project Untitled
 */

#pragma once
#include "Food.h"
#include "SistemaDeAlimentacion.h"
#include "Report.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    public ref class Dispenser {
    public:
        List<int>^ FeedingSchedule;
        double FoodAmount;
        bool IsPlateFull;
        double DispenserFood;
        SistemaDeAlimentacion^ ControlledBy;
        Report^ AssignedTo;
        /**
         * @param Food^
         */
        bool DispenseFood(Food^);

        bool DispenseWater();
    };
}