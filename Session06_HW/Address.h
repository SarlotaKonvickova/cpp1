#ifndef CPP1_ADDRESS_H
#define CPP1_ADDRESS_H

#include <string>
#include <iostream>

using namespace std;

struct Address {
public:
    Address(string street, string city, string zip);

    Address();

    friend ostream &operator<<(ostream &os, const Address &dt);

    friend istream &operator<<(ostream &is, Address &dt);

private:
    string _street;
    string _city;
    string _zip;

};


#endif //CPP1_ADDRESS_H
