/**
 * Project Untitled
 */

#pragma once
#include "Food.h"
#include "Report.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    public ref class Dispenser {
    public:
        List<int>^ FeedingSchedule;
        double FoodAmount; //Cantidad en el plato
        bool IsPlateFull; //estado
        double DispenserFood;//cant comida
        Report^ AssignedTo;

        bool DispenseFood(Food^);
        bool DispenseWater();
    };
}