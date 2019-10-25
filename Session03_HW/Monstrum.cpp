#include "Monstrum.h"

int Monsturm::getHp() const {
    return this->hp;
}

int Monsturm::getMaxHp() const {
    return this->maxHp;
}

void Monsturm::setHp(int aHp) {
    this->hp = aHp;
}

void Monsturm::setMaxHp(int aMaxHp) {
    this->maxhp = aMaxHp;
}