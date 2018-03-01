#ifndef RIDE_H
#define RIDE_H
#include "pos.h"

class ride
{
private:
    const pos i,o;
    const int ti,to;
    bool done;
public:
    ride(pos pi, pos po, int tti, int tto);
    const int time();
    const int initt();
    const int finalt();
    const pos initp();
    const pos finalp();
    const bool donef();
    void hecho();
};

#endif // RIDE_H
