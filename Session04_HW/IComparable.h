#ifndef CPP1_ICOMPARABLE_H
#define CPP1_ICOMPARABLE_H

#include "IObjekt.h"


class IComparable : public IObjekt {
private:

public:
    virtual ~IComparable() {};

    virtual int compareTo(IComparable *obj) const = 0;

};


#endif //CPP1_ICOMPARABLE_H
