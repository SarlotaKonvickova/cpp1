#include <iostream>
#include "TelefonniSeznam.h"
#include "Osoba.h"
#include "Exception.h"
#include <exception>

using namespace Entity;
using namespace Model;
using namespace std;

int main() {

    try {

        TelefonniSeznam seznam{};

        Osoba o1 = Osoba{"Wesley", "746-133-889", 0};
        Osoba o2 = Osoba{"Adrienne", "050-262-234", 1};
        Osoba o3 = Osoba{"Philip", "395-485-655", 2};
        Osoba o4 = Osoba{"Sean", "905-262-230", 3};
        Osoba o5 = Osoba{"Russell", "320-203-479", 4};
        Osoba o6 = Osoba{"Maile", "959-038-234", 5};
        Osoba o7 = Osoba{"Amelia", "170-810-078", 6};

        seznam.pridejOsobu(o1);
        seznam.pridejOsobu(o2);
        seznam.pridejOsobu(o3);
        seznam.pridejOsobu(o4);
        seznam.pridejOsobu(o5);
        seznam.pridejOsobu(o6);
        seznam.pridejOsobu(o7);

        cout << "The person number with id 5 is: " << seznam.najdiTelefon(5) << endl;
        cout << "The phone number with the name Philip is: " << seznam.najdiTelefon("Philip") << endl;

        seznam.najdiTelefon(7);

    }
    catch (WrongInputException &ex) {
        cout << ex.getMessage() << endl;
    }
    catch (NoSuchElementException &ex) {
        cout << ex.getMessage() << endl;
    }
    return 0;
}