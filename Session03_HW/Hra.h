#ifndef CPP1_HRA_H
#define CPP1_HRA_H

#include "PohyblivyObjekt.h"

class Hra {
private:
    Objekt **objekty;
    int pocetObjektu;
public:
    Hra();

    ~Hra();

    void vlozObjekt(Objekt *o);

    // vrati pole id vsech objektu v zadanych souradnicich
    int *najdiIdStatickychObjektu(double xMin, double xMax, double yMin, double yMax);

    // vrati pole ukazatelu na pohyblive objekty v kruhove oblasti (S=[x,y], radius = r)
    PohyblivyObjekt **najdiIdPohybliveObjektyVOblasti(double x, double y, double r);

    // + uhel natoceni
    PohyblivyObjekt **najdiIdPohybliveObjektyVOblasti(double x, double y, double r, double uMin, double uMax);
};

#endif //CPP1_HRA_H
