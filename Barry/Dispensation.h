
#pragma once

using namespace System;

namespace Barry {
    [Serializable] public ref class Dispensation
    {
    public:
        property String^ Date;
        property int TimesDispensedFood;
        property int TimesDispensedWater;

        Dispensation() {
            Date = ((DateTime^)DateTime::Now)->ToString("yyyy/MM/dd");
        }

    public:
        void WaterDispensationInitialize() {
            TimesDispensedWater = 1;
        }
        void FoodDispensationInitialize() {
            TimesDispensedFood = 1;
        }
    };

}


