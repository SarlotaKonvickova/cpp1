#include "PohyblivyObjekt.h"

PohyblivyObjekt::~PohyblivyObjekt() {
}

PohyblivyObjekt::PohyblivyObjekt(int aId, double aUhelNatoceni) : Objekt{
        setUhelNatoceni(aUhelNatoceni);
}

double PohyblivyObjekt::getUhelNatoceni() {
    return uhelNatoceni;
}

double PohyblivyObjekt::setUhelNatoceni(double aUhelNatoceni) {
    if (aUhelNatoceni > 2 * M_PI || aUhelNatoceni < 0) {
        throw std::out_of_range("Zadejte uhel v rozsahu od 0 do 2PI");
    }
    uhelNatoceni = aUhelNatoceni;
}