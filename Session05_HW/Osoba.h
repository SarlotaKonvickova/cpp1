#ifndef CPP1_OSOBA_H
#define CPP1_OSOBA_H

#include <string>

using

namespace Entity{
class Osoba {
private:
    string jmeno;
    string telefon;
    int id;
public:
    Osoba();

    Osoba(string jmeno, string, telefon, int id);

    ~Osoba();

    int getId() const;

    string getJmeno() const;

    string getTelefon() const;
};

}


#endif //CPP1_OSOBA_H
