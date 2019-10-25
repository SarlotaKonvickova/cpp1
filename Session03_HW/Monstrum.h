#ifndef CPP1_MONSTRUM_H
#define CPP1_MONSTRUM_H

#include "PohyblivyObjekt.h"

class Monstrum : public PohyblivyObjekt {
private:
    int hp;
    int maxHp;
public:
    int getHp() const;

    int getMaxHp() const;

    void setHp(int aHp);

    void setMaxHp(int aMaxHp);
};

#endif //CPP1_MONSTRUM_H
