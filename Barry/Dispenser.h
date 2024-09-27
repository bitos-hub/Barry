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
        double FoodAmount;
        bool IsPlateFull;
        double DispenserFood;
        Report^ AssignedTo;

        bool DispenseFood(Food^);
        bool DispenseWater();
    };
}