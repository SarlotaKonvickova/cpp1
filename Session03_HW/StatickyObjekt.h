#ifndef CPP1_STATICKYOBJEKT_H
#define CPP1_STATICKYOBJEKT_H

#include "Objekt.h"

enum class TypPrekazky {
    Skala, MalaRostlina, VelkaRostlina
};

class StatickyObjekt : public Objekt {
private:
    TypPrekazky typPrekazky;
public:
    StatickyObjekt(int aId, TypPrekazky aTypPrekazky);

    ~StatickyObjekt();

    TypPrekazky &getTypPrekazky();
};


#endif //CPP1_STATICKYOBJEKT_H
