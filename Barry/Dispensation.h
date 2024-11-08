
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Barry {
    [Serializable] public ref class Dispensation
    {
    public:
        property DateTime Date;
        property int TimesDispensed;

        Dispensation() {
            Date = DateTime::Now;
            TimesDispensed = 0;
        }

        Dispensation(DateTime date, int timesDispensed) {
            Date = date;
            TimesDispensed = timesDispensed;
        }
    };
}


