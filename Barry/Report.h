/**
 * Project Untitled
 */


#pragma once
#include "User.h"
#include "Food.h"
#include "Pet.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    [Serializable] public ref class Report {
    public:
        String^ GeneratorUserName;
        List<Pet^>^ WeightTable;
        String^ EmissionDate;
        String^ DateRange;
        List<Food^>^ BrandTable;
        int FullFeeding;
        User^ UsarioGeneraReporte;
        void OrganizeInfo();
    };
}