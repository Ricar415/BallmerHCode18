#ifndef PLATFORM_H
#define PLATFORM_H
#include <vector>
#include "vehicle.h"
#include "ride.h"

class platform
{
private:
    vector<vehicle> vehicles;
    vector<ride> rides;
    int simulationt;
public:
    platform();
};

#endif // PLATFORM_H
