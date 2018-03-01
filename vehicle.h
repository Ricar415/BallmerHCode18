#ifndef VEHICLE_H
#define VEHICLE_H

#include "pos.h"

class vehicle
{
private:
    pos position;
    bool available;
public:
    vehicle();
    const pos positionf();
    const bool availablef();
};

#endif // VEHICLE_H
