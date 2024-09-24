/**
 * Project Untitled
 */

#pragma once
#include "Users.h"

using namespace System;

namespace Barry {
    public ref class InternalUsers : public Users {
    public:
        bool EditSchedule;
        bool EditFood;
        bool CheckReport;
        bool CheckGeneralReport;
    };
}