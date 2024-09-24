/**
 * Project Untitled
 */


#pragma once
#include "Food.h"
#include "Pets.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    public ref class Report {
    public:
        String^ GeneratorUserName;
        List<Pets^>^ WeightTable;
        String^ EmissionDate;
        String^ DateRange;
        List<Food^>^ BrandTable;
        int FullFeeding;

        void OrganizeInfo();
    };
}