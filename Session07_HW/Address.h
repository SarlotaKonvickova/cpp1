#ifndef CPP1_ADDRESS_H
#define CPP1_ADDRESS_H

#include <string>
#include <iostream>

using namespace std;

struct Address {
public:
    Address(string aStreet, string aCity, string aZip);

    Address();

    friend ostream &operator<<(ostream &os, const Address &dt);

    friend istream &operator<<(ostream &is, Address &dt);

    string getStreet() const { return _street };

    string getCity() const { return _city };

    string getZip() const { return _zip };

private:
    string _street;
    string _city;
    string _zip;

};


#endif //CPP1_ADDRESS_H
