#include "platform.h"

platform::platform()
{
}
void platform::asssign(){
    for (int i = 0; i < vehicles.size() ; i++){
        for (int j = 0; j < rides.size(); j++){
            if (vehicles[i].positionf() - rides[j].initp() == simulationt - rides[j].initt()){
                rides[j].hecho(1);

            }
        }
    }
}
