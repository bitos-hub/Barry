/**
 * Project Untitled
 */


#pragma once
#include "Food.h"
#include "Users.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    public ref class Pets {
    public:
        String^ Name;
        float Weight;
        String^ Specie;
        String^ Status;
        List<Food^>^ OpcionesComida;
        double FoodServing;
        double WaterServing;
        Users^ Owners;
    };
}