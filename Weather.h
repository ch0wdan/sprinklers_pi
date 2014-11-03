// Weather.h
// This file manages the retrieval of Weather related information and adjustment of durations
//   from Weather Underground
// Author: Jordan de Geus
// Copyright (c) 2015 This is a forked version of Richard Zimmerman's OpenSprinkler done by Jordan de Geus
//

#ifndef _WEATHER_h
#define _WEATHER_h

#include "port.h"

class Weather
{
public:
	struct ReturnVals
	{
		bool valid;
		bool keynotfound;
		short minhumidity;
		short maxhumidity;
		short meantempi;
		short precip_today;
		short precipi;
		short windmph;
		short UV;
	};
public:
	Weather(void);
	int GetScale(const IPAddress & ip, const char * key, uint32_t zip, const char * pws, bool usePws) const;
	int GetScale(const ReturnVals & vals) const;
	ReturnVals GetVals(const IPAddress & ip, const char * key, uint32_t zip, const char * pws, bool usePws) const;
};

#endif
