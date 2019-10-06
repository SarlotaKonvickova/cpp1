#include <iostream>

struct triangle {
    int a, b, c;
};


int main(int argc, char **argv) {

    // prvni program
    int a, b, c;

    std::cout << "Zadej stranu a:" << endl;
    std::cout << "Zadej stranu b:" << endl;
    std::cout << "Zadej stranu c:" << endl;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Obvod: " << a + b + c << endl;

    } else {
        cout << "Trojuhelnik nelze sestrojit" << endl;
    }

    // prvni struktura



}
