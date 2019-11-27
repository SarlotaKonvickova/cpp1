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

void save(){
    Person arrayOfPeople[SIZE_OF_ARRAY];
    Person P1{"Kylie", "Romero", Address{"938-624 Fermentum Road", "Saint-Remy", "67043-579"}};
    Person P2{"Jordan", "Stark", Address{"Ap #507-1145 Varius Rd.", "Duffel", "43040"}};
    Person P3{"Amir", "Glass", Address{"9150 At Street", "Riksingen","7438"}};
    arrayOfPeople[0] = P1;
    arrayOfPeople[1] = P2;
    arrayOfPeople[2] = P3;


    ofstream myFile;
    myFile.open("Session_06.txt");
    for (const auto& person : poleOsob)
    {
        myFile << person << std::endl;
    }
    myFile.close();
    std::cout << "Save end" << std::endl; // dokonceni ukladani

}

void load(){
    Person* people = new Person[SIZE_OF_ARRAY];
    Person temp;
    ifstream in{};
    int count = 0;
    in.open("Session_06.txt");
    if (in.is_open()) {
        for (int i = 0; i < SIZE_OF_ARRAY; i++) {
            in >> temp;
            people[i] = temp;
        }
    }
    write(people,SIZE_OF_ARRAY);
}


int main(int argc, char **argv) {
    save();
    load();
    return 0;
}