#ifndef CPP1_TELEFONNISEZNAM_H
#define CPP1_TELEFONNISEZNAM_H

#include "Osoba.h"

namespace Model {
    class TelefonniSeznam {
    public:
        struct PrvekSeznam {
        private:

        public:
            PrvekSeznam *dalsi;
            Entity::Osoba data;

            PrvekSeznam() : dalsi(nullptr), data() {}
        };

    private:
        PrvekSeznam *_zacatek;

    public:
        void pridejOsobu(Entity::Osoba o);

        std::string najdiTelefon(std::string jmeno) const;

        std::string najdiTelefon(int id) const;

        TelefonniSeznam() : _zacatek(nullptr) {}

        void smazSeznam() const;
    };
}

#endif //CPP1_TELEFONNISEZNAM_H
