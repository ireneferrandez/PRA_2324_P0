#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x;
    double y;
    double z;
    bool sostener;

public:
    BrazoRobotico(double x_inicial, double y_inicial, double z_inicial,bool sostener);
    double getx();
    double gety();
    double getz();
    bool sostenido();
    void coger();
    void soltar();
    void mover(double x_final, double y_final, double z_final);
};

#endif
