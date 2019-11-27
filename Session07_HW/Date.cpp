#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year) {
    this->_day = day;
    this->_month = month;
    this->_year = year;
}

Date::Date() {}

ostream &operator<<(ostream &os, const Date &d) {
    os << d._day << " " << d._month << " " << d._year;
    return os;
}

istream &operator>>(istream &is, Date &d) {
    is >> d._day;
    is >> d._month;
    is >> d._year;
    return is;
}
