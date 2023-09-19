#include "BrazoRobotico.h"



BrazoRobotico::BrazoRobotico(double x_inicial, double y_inicial, double z_inicial,bool sostener){
        this->x_inicial = x_inicial;
        this->y_inicial = y_inicial;
        this->z_inicial = z_inicial;
        this->sostener = sostener;
}
    double BrazoRobotico::getx(){
            return x_inicial;
    }
    double BrazoRobotico::gety(){
            return y_inicial;
    }
    double BrazoRobotico::getz(){
            return z_inicial;
    }
    bool BrazoRobotico::sostenido(){
            return sostener;
    }
    void BrazoRobotico::coger(){
            sostener=true;
    }
    void BrazoRobotico::soltar(){
            sostener=false;
    }
    void BrazoRobotico::mover(double x_final, double y_final, double z_final){
            x_inicial += x_final;
            y_inicial += y_final;
            z_inicial += z_final;
    }
