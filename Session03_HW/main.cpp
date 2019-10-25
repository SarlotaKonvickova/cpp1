#include <iostream>
#include "StatickyObjekt.h"
#include "Hra.h"

int main() {

    Hra hra{ };

    StatickyObjekt s1{ 0, TypPrekazky::MalaRostlina };
    s1.SetX(15);
    s1.SetY(20);
    hra.vlozObjekt(&s1);

}