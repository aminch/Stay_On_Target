#ifndef WATCHY_STAY_ON_TARGET_H
#define WATCHY_STAY_ON_TARGET_H

#ifdef WATCHY_SIM
    #include "..\..\Watchy.h"
#else // WATCHY_SIM
    #include <Watchy.h>
#endif // WATCHY_SIM

#include "AlmostThere_Numeric16pt7b.h"
#include "AlmostThere_Numeric24pt7b.h"
#include "AlmostThere_Numeric26pt7b.h"
#include "AlmostThere_Numeric28pt7b.h"
#include "englbesh14pt7b.h"
#include "SceletAF14pt7b.h"
#include "SceletAF10pt7b.h"
#include "SceletAF30pt7b.h"
#include "SceletAF26pt7b.h"
#include "SceletAFBold26pt7b.h"
#include "icons.h"

class WatchyStayOnTarget : public Watchy {
    using Watchy::Watchy;
    public:
        void drawWatchFace();
        void drawTime();
        void drawDate();
        void drawSteps();
        void drawWeather();
        void drawBattery();
};

#endif