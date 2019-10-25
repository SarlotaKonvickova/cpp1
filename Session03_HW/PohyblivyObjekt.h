#ifndef CPP1_POHYBLIVYOBJEKT_H
#define CPP1_POHYBLIVYOBJEKT_H

#include "Objekt.h"

class PohyblivyObjekt : public Objekt {
private:
    double uhelNatoceni;
public:
    double getUhelNatoceni() const;

    void setUhelNatoceni(double aUhelNatoceni);
};

#endif //CPP1_POHYBLIVYOBJEKT_H
