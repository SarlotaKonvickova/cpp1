#ifndef CPP1_GENERICEXAMPLE_H
#define CPP1_GENERICEXAMPLE_H

#include <iostream>

using namespace std;

struct Point {
    int X;
    int Y;
    Point(int x, int y) : X(x), Y(y){}
};

template <typename T>
void Print(const T& aValue) {
    cout << aValue << endl;
}

template <>
void Print(const Point& aValue) {
    cout << aValue.X << ", " << aValue.Y << endl;
}

void GenericSample() {
    Print(3);
    Print<int>(3);
    Print("Hello");
    Print(Point(1, 2));
}

#endif //CPP1_GENERICEXAMPLE_H