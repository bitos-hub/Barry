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
        String^ Specie;
        String^ Status;
        List<Food^>^ OpcionesComida;
        double FoodServing;
        User^ Owner;
        array<Byte>^ Photo;
        Dispenser^ PetDispenser; //se agreg� este atributo para tener un dispensador por mascota
    public:
        Pet() {

        }
        Pet(int id, String^ name, double weight, String^ specie, String^ status, double foodServing)
            : Id(id), Name(name), Weight(weight), Specie(specie), Status(status), FoodServing(foodServing) {}
        
        Pet(List<Food^>^ opcionesComida): OpcionesComida(opcionesComida){}
    };
}