#include "ride.h"

ride::ride(pos pi, pos po, int tti, int tto)
{
    done = 0;
    ti = tti;
    to = tto;
    i = pi;
    o = po;
}
const int ride::time(){ return to - ti;}
const int ride::initt(){return ti;}
const int ride::finalt(){return to;}
const pos ride::initp(){return i;}
const pos ride::finalp(){return o;}
const bool ride::donef(){return done;}
void ride::hecho(bool a){done = a;}
