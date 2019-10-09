#ifndef CPP1_EXCEPTIONEXAMPLE_H
#define CPP1_EXCEPTIONEXAMPLE_H

#include <iostream>
#include <exception>
#include <stdexcept>

void ExceptionSample()
{
    try
    {
        throw 4; // vyhodi ostatni vyjimky
        throw std::range_error("Range error");
        throw std::invalid_argument("Invalid argument"); // vyhodi logic error => potomek logic error
        throw std::logic_error("Logic error");
    }
    catch (std::logic_error)
    {
        std::cout << "Logic error handle" << std::endl;
    }
    catch (std::exception& ex) {
        std::cout << "Exception error" << std::endl;
    }
    catch (...) // ostatni, ktere nemame catchnute
    {

    }
}


#endif //CPP1_EXCEPTIONEXAMPLE_H
