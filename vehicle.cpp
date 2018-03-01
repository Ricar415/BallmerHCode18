#include "vehicle.h"
#include "pos.h"

vehicle::vehicle()
{
    position.setX(0);
    position.setY(0);
    available = 1;
}
const pos vehicle::positionf(){return position;}
const bool vehicle::availablef(){return available;}
