//ok
#pragma once
#include "User.h"
#include "Food.h"

namespace Barry {
    ref class Dispenser;
}

using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    [Serializable] public ref class Pet {
    public:
        int Id;
        String^ Name;
        double Weight;
        List<double>^ WeightEvolution;
        List<DateTime>^ WeightChanges;
        String^ Specie;
        String^ Status;
        List<Food^>^ OpcionesComida;
        double FoodServing;
        List<DateTime>^ FoodChanges;
        List<double>^ FoodEvolution;
        double WaterServing;
        List<double>^ WaterEvolution;
        List<DateTime>^ WaterChanges;
        User^ Owner;
        array<Byte>^ Photo;
        Dispenser^ PetDispenser; //se agregó este atributo para tener un dispensador por mascota
        String^ LastTimeFeD;
        String^ LastTimeHidrated;

    public:
        Pet() {
            WeightEvolution = gcnew List<double>();
            WeightChanges = gcnew List<DateTime>();
            FoodEvolution = gcnew List<double>();
            FoodChanges = gcnew List<DateTime>();
            WaterEvolution = gcnew List<double>();
            WaterChanges = gcnew List<DateTime>();
            OpcionesComida = gcnew List<Food^>();
        }
        Pet(int id, String^ name, double weight, String^ specie, String^ status, double foodServing, double waterServing)
            : Id(id), Name(name), Weight(weight), Specie(specie), Status(status), FoodServing(foodServing), WaterServing(waterServing) {}
        
        Pet(List<Food^>^ opcionesComida): OpcionesComida(opcionesComida){}
    };
}