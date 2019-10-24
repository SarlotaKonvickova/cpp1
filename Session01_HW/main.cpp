#include <iostream>

struct triangle {
    int a, b, c;
};

bool lzeSestrojit(triangle t) {
    if ((t.a + t.b > t.c) && (t.a + t.c > t.b) && (t.b + t.c > t.a)) {
        return true;
    }
    return false;
}

bool lzeSestrojit(triangle *t) {
    if ((t->a + t->b > t->c) && (t->a + t->c > t->b) && (t->b + t->c > t->a)) {
        return true;
    }
    return false;
}


int main(int argc, char **argv) {

    // 1. prvni program
    int a, b, c;

    std::cout << "Zadej stranu a:" << endl;
    std::cout << "Zadej stranu b:" << endl;
    std::cout << "Zadej stranu c:" << endl;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        std::cout << "Obvod: " << a + b + c << endl;

    } else {
        std::cout << "Trojuhelnik nelze sestrojit" << endl;
    }

    // 2. prvni struktura
    triangle t;

    std::cout << "Zadej stranu a:" << endl;
    std::cin >> t.a;
    std::cout << "Zadej stranu b:" << endl;
    std::cin >> t.b;
    std::cout << "Zadej stranu c:" << endl;
    std::cin >> t.c;

    if (lzeSestrojit(t)) {
        std::cout << "Obvod:" << t.a + t.b + t.c << endl;
    } else {
        std::cout << "Trojuhelnik nelze sestrojit" << endl;
    }


    // 3. prvni ukazatel
    triangle *t = new triangle;

    std::cout << "Zadej stranu a:" << endl;
    std::cin >> t.a;
    std::cout << "Zadej stranu b:" << endl;
    std::cin >> t.b;
    std::cout << "Zadej stranu c:" << endl;
    std::cin >> t.c;

    if (lzeSestrojit(t)) {
        std::cout << "Obvod: " << t->a + t->b + t->c << endl;
    } else {
        std::cout << "Trojuhelnik nelze sestrojit" << endl;
    }

    // 4. dynamicka pamet
    triangle *t = new triangle;

    std::cout << "Zadej stranu a:" << endl;
    std::cin >> t->a;
    std::cout << "Zadej stranu b:" << endl;
    std::cin >> t->b;
    std::cout << "Zadej stranu c:" << endl;
    std::cin >> t->c;

    if (lzeSestrojit(*t)) {
        cout << "Obvod: " << t->a + t->b + t->c << endl;
    } else {
        cout << "Trojuhelnik nelze sestrojit" << endl;
    }
    delete (t);

    // 5. pole v dynamicke pameti

    int countTriangles;
    std::cout << "zadejte pocet trojuhelniku: " << endl;
    std::cin >> countTriangles;
    triangle *arrayTriangle = new triangle[countTriangles];

    for (int i = 0; i < countTriangles; i++) {
        triangle *t = new triangle
        std::cout << "Zadejte trojuhelnik na indexu " << i << endl;
        arrayTriangle[i] = *t;
        std::cout << "zadej a: ";
        std::cin >> arrayTriangle[i].a;
        std::cout << "zadej b: ";
        std::cin >> arrayTriangle[i].b;
        std::cout << "zadej c: ";
        std::cin >> arrayTriangle[i].c;
        std::cout << endl;
        delete t;
    }

    for (int i = 0; i < countTriangles; i++) {

        std::cout << "Trojuhelnik " << i << " a: " << arrayTriangle[i].a << ", b: " << arrayTriangle[i].b << ", c: "
             << arrayTriangle[i].c << endl;
        if (lzeSestrojit(arrayTriangle[i])) {
            std::cout << "Obvod: " << arrayTriangle[i].a + arrayTriangle[i].b + arrayTriangle[i].c << endl;
        } else {
            std::cout << "Trojuhelnik nelze sestrojit" << endl;
        }
    }

    delete[] poleTrojuhel;
    return 0;

}