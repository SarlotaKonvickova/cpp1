#ifndef CPP1_IOBJEKT_H
#define CPP1_IOBJEKT_H

#include <string>
#include <iostream>

class IObjekt {
private:

public:
    virtual ~IObjekt() {}

    virtual std::string toString() const = 0;
};

#endif //CPP1_IOBJEKT_H
