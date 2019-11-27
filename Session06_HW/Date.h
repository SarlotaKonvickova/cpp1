#ifndef CPP1_DATE_H
#define CPP1_DATE_H

#include <iostream>

using namespace std;

struct Date {
public:
    Date(int day, int month, int year);

    Date();

    friend ostream &operator<<(ostream &os, const Date &d);

    friend istream &operator>>(istream &is, Date &d);

private:
    int _day;
    int _month;
    int _year;
};

#endif //CPP1_DATE_H
