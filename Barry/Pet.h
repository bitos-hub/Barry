//ok
#pragma once
#include "User.h"
#include "Food.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    public ref class Pet {
    public:
        int Id;
        String^ Name;
        double Weight;
        String^ Specie;
        String^ Status;
        List<Food^>^ OpcionesComida;
        double FoodServing;
        double WaterServing;
        User^ Owner;
    public:
        Pet(int id, String^ name,double weight,String^ specie,String^ status, double foodServing, double waterServing)
            : Id(id), Name(name), Weight(weight), Specie(specie), Status(status), FoodServing(foodServing), WaterServing(waterServing) {}
        
        Pet(List<Food^>^ opcionesComida): OpcionesComida(opcionesComida){}
    };
}