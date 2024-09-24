/**
 * Project Untitled
 */

#pragma once
#include "Users.h"
using namespace System;

namespace Barry {
    public ref class PortalUsers : public Users {
    public:
        bool CheckReport;
        bool CheckGeneralReport;
    };
}