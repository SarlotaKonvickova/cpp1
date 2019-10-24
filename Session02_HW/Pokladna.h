#ifndef CPP1_POKLADNA_H
#define CPP1_POKLADNA_H

#include <string>
#include "Uctenka.h"

class Pokladna {
private:
    Uctenka* poleUctenek;
    int pocetVydanychUctenek;
    static int citacID;
public:
    Pokladna();
    ~Pokladna();
    Uctenka& vystavUctenku(double castka, double dph); // vystaví účtenku, nastaví parametry účtence v poli, inkrementuje pocetVydanychUctenek a vrací referenci na vystavenou účtenku.
    Uctenka& dejUctenku(int); // vyhledá a vrátí účtenku z pole dle cislaUctenky.Pokud neexistuje vraťte první účtenku z pole.
    double dejCastku() const; // vrátí celkovou částku ze všech vystavených účtenek.
    double dejCastkuVcDph() const; // vrátí celkovou částku vč.DPH ze všech vystavených účtenek(castkaVcDph = castka * (1 + dph).
};

#endif //CPP1_POKLADNA_H
