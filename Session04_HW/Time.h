#ifndef CPP1_TIME_H
#define CPP1_TIME_H

#include "IComparable.h"


class Time : public IComparable {
private:
    int _hodiny;
    int _minuty;
    int _sekundy;
public:
    Time(int _aHodiny, int _aMinuty, int _aSekundy);

    virtual std::string toString() const override;

    virtual int compareTo(IComparable *obj) const override;
};

#endif //CPP1_TIME_H