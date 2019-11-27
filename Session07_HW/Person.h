#ifndef CPP1_PERSON_H
#define CPP1_PERSON_H

#include <string.h>
#include "Address.h"
#include "Date.h"

using namespace std;

struct Person {
public:
    Person(string name, string last_name, Address _residence, Date birthDate);
    Person();
    friend ostream& operator<<(ostream& os, const Person& p);
    friend istream& operator<<(istream& is, Person& p);
    void read(ifstream *in);
    void write(oftstream *out);
private:
    string _name;
    string _lastName;
    Address _residence;
    Date birthDate;
};

#endif //CPP1_PERSON_H
