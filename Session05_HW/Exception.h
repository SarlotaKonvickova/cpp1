#ifndef CPP1_EXCEPTION_H
#define CPP1_EXCEPTION_H

#include <string>

struct Exception {
private:
    std::string message;
public:
    Exception(std::string message);

    virtual std::string getMessage();
};

struct NoSuchElementException : Exception {
    NoSuchElementException(std::string message) : Exception(message) {}
};

struct WrongInputException : Exception {
    WrongInputException(std::string message) : Exception(message) {}
};

#endif //CPP1_EXCEPTION_H
