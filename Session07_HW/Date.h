#ifndef CPP1_DATE_H
#define CPP1_DATE_H

#include <iostream>

using namespace std;

struct Date {
public:
    Date(int aDay, int aMonth, int aYear);

    Date();

    ~Date();

    friend ostream &operator<<(ostream &os, const Date &d);

    friend istream &operator>>(istream &is, Date &d);

    int getDay() const { return _day };

    int getMonth() const { return _month };

    int getYear() const { return _year };

private:
    int _day;
    int _month;
    int _year;
};

#endif //CPP1_DATE_H
