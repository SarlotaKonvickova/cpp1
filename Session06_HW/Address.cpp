#include "Address.h"

using namespace std;

Address::Address(string street, string city, string zip) {
    this->_street = street;
    this->_city = city;
    this->_zip = zip;
}

Address::Address() {}

ostream &operator<<(ostream &os, const Address &dt) {
    os << dt._city << " " << dt._street << " " << dt._zip;
    return os;
}

istream &operator>>(istream &is, Address &dt) {
    is >> dt._city;
    is >> dt._street;
    is >> dt._zip;
    return is;
}

