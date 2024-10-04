
#pragma once

using namespace System;

namespace Barry {
    public ref class Food {
    public:
        int Id;
        String^ FoodBrand;
        double FoodPrice;
        String^ Name;
        String^ Status;
        double FoodAmount;

        Food(int id, String^ foodbrand, double  foodPrice, String^ name, String^ status, double foodAmount) {
            Id =  id;
            FoodBrand = foodbrand;
            FoodPrice = foodPrice;
            Name = name;
            Status = status;
            FoodAmount = foodAmount;
        }
        
    };
}