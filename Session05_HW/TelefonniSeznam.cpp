#include "TelefonniSeznam.h"
#include "Exception.h"

void Model::TelefonniSeznam::pridejOsobu(Entity::Osoba o) {
    PrvekSeznam *novyPrvekSeznamu = new PrvekSeznam{};
    novyPrvekSeznamu->data = o;
    novyPrvekSeznamu->dalsi = _zacatek;
    _zacatek = novyPrvekSeznamu;
}

std::string Model::TelefonniSeznam::najdiTelefon(std::string jmeno) const {
    if (jmeno._Equal(""))
        throw WrongInputException("The input with parameter NAME is wrong.");
    PrvekSeznam *prvekSeznam = _zacatek;
    while (prvekSeznam != nullptr) {
        if (prvekSeznam->data.getJmeno() == jmeno)
            return prvekSeznam->data.getTelefon();
        prvekSeznam = prvekSeznam->dalsi;
    }
    throw NoSuchElementException("Person doesn't exist.");
}

std::string Model::TelefonniSeznam::najdiTelefon(int id) const {
    if (id <= 0)
        throw WrongInputException("The input with parameter ID is wrong. It must be positive number.");
    PrvekSeznam *prvekSeznam = _zacatek;
    while (prvekSeznam != nullptr) {
        if (prvekSeznam->data.getId() == id)
            return prvekSeznam->data.getTelefon();
        prvekSeznam = prvekSeznam->dalsi;
    }
    throw NoSuchElementException("Person doesn't exist.");
}

void Model::TelefonniSeznam::smazSeznam() const {
    PrvekSeznam *prvek = _zacatek;
    while (prvek != nullptr) {
        PrvekSeznam *tmp = prvek->dalsi;
        delete prvek;
        prvek = tmp;
    }
}