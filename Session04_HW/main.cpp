#include <iostream>
#include <string>
#include "Time.h"

#define POCET_PRVKU 10

using namespace std;

void SeraditPole(IComparable **pole, int velikostPole) {
    for (int i = 0; i < velikostPole; ++i) {
        for (int j = 0; j < i; ++j) {
            if (pole[j]->compareTo(pole[i]) == 1) {
                IComparable *tmp = pole[j];
                pole[j] = pole[i];
                pole[j] = tmp;
            }
        }
    }
}


int main() {
    IComparable **poleUkazatelu = new IComparable *[POCET_PRVKU];
    poleUkazatelu[0] = new Time(12, 54, 30);
    poleUkazatelu[1] = new Time(15, 48, 23);
    poleUkazatelu[2] = new Time(6, 30, 00);
    poleUkazatelu[3] = new Time(17, 15, 56);
    poleUkazatelu[4] = new Time(15, 52, 57);
    poleUkazatelu[5] = new Time(17, 35, 32);
    poleUkazatelu[5] = new Time(12, 34, 56);
    poleUkazatelu[6] = new Time(11, 11, 11);
    poleUkazatelu[7] = new Time(22, 33, 44);
    poleUkazatelu[8] = new Time(12, 23, 34);
    poleUkazatelu[9] = new Time(7, 6, 5);

    for (int i = 0; i < POCET_PRVKU; ++i) {
        cout << poleUkazatelu[i]->toString() << endl;
    }

    SeraditPole(poleUkazatelu, POCET_PRVKU);

    for (int j = 0; j < POCET_PRVKU; ++j) {
        cout << poleUkazatelu[i]->toString() << endl;
    }

    for (int k = 0; k < POCET_PRVKU; ++k) {
        delete[] poleUkazatelu[i];
    }
    delete[] poleUkazatelu;

}