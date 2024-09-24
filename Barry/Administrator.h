/**
 * Project Untitled
 */



#pragma once
#include "Users.h"
#include "InternalUsers.h"
#include "PortalUsers.h"
#include "Pets.h"
using namespace System;

namespace Barry {
    public ref class Administrator : public Users {
    public:

        /**
         * @param Pets^
         */
        bool AddPets(Pets^);

        /**
         * @param InternalUsers^
         */
        bool AddIUsers(InternalUsers^);

        /**
         * @param RegularUsers^
         */
        bool EditPermissions(InternalUsers^,PortalUsers^);

        /**
         * @param PortalUsers^
         */
        bool AddPUsers(PortalUsers^);
    };
}