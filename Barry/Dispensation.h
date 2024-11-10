
#pragma once

using namespace System;

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


