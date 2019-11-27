#include "Person.h"

using namespace std;

Person::Person(string aName, string aLastName, Address aResidence, Date aBirthDate) {
    this->_name = aName;
    this->_lastName = aLastName;
    this->_residence = aResidence;
    this->_birthDate = aBirthDate;
}

Person::Person() {}

Person::~Person() {}

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