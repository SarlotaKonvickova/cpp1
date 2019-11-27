#include <iostream>
#include <fstrean>
#include "Person.h"

#define SIZE_OF_ARRAY 3

using namespace std;

void write(Person *people, int size) {
    for (int i = 0; i < size; i++) {
        cout << people[i] << endl;
    }
};


void write(vector <Person> person) {
    for (const auto &person : person) {
        cout << person << endl;
    }
}

void save() {
    Person arrayOfPeople[SIZE_OF_ARRAY];
    Person P1{"Kylie", "Romero", Address{"938-624 Fermentum Road", "Saint-Remy", "67043-579"}, Date{1, 3, 1990}};
    Person P2{"Jordan", "Stark", Address{"Ap #507-1145 Varius Rd.", "Duffel", "43040"}, Date{2, 5, 2000}};
    Person P3{"Amir", "Glass", Address{"9150 At Street", "Riksingen", "7438"}, Date{4, 6, 1993}};
    arrayOfPeople[0] = P1;
    arrayOfPeople[1] = P2;
    arrayOfPeople[2] = P3;
    ofstream out{};
    out.open("session07.dat", ios_base::binary);

    if (out.is_open()) {
        for (int i = 0; i < SIZE_OF_ARRAY; i++) {
            out.write((char *) &poleOsob[i], sizeof(Osoba));
        }
    }

    Person people[VELIKOST_POLE] = {
            Person("Kylie", "Romero", Address("938-624 Fermentum Road", "Saint-Remy", "67043-579"), Date(1, 3, 1990)),
            Person("Jordan", "Stark", Address("Ap #507-1145 Varius Rd.", "Duffel", "43040"), Date(2, 5, 2000)),
            Person("Amir", "Glass", Address("9150 At Street", "Riksingen", "7438"), Date(4, 6, 1993))};

    ofstream binFile("session07-2.dat", std::ios::binary);
    if (binFile.is_open()) {
        for (int i = 0; i < SIZE_OF_ARRAY; i++) {
            people[i].write(&binFile);
        }
        binFile.close();

        cout << "save";
    } else {
        throw exception("fail ");
    }


}

void load() {
    ifstream in{};
    in.open("session07.dat", ios_base::binary);
    string s{};
    //int count = 0;
    Person *people = new Person[3];
    if (in.is_open()) {
        for (int i = 0; i < 3; i++) {
            in.read((char *) &people[i], sizeof(Person));
        }
        in.close();
    }
    write(people, SIZE_OF_ARRAY);
    delete[] people;

}


int main(int argc, char **argv) {
    save();
    load();
    return 0;
}