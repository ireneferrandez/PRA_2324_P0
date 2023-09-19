#include<iostream>
#include "BrazoRobotico.h"


int main(){
        BrazoRobotico Brazo(0.0,0.0,0.0,false);
        Brazo.mover(33.33,33.33,33.33);
        Brazo.coger();
        return 0;
}
