#include "Person.h"

using namespace std;

Person::Person(string name, string last_name, Address _residence, Date birthDate) {
    this->_name = name;
    this->_lastName = lastName;
    this->_residence = residence;
    this->_birthDate = birthDate;
}

Person::Person() {}

ostream &operator<<(ostream &os, const Person &p) {

    os << p._name << " " << p._lastName << endl << p._birthDate << endl << p._residence << endl;
    return os;
}

istream &operator>>(istream &is, Person &p) {
    is >> p._name;
    is >> p._lastName;
    is >> p._birthDate;
    is >> p._residence;
    return is;
}