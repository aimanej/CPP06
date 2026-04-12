#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class Base{
    public:
        virtual ~Base();
};

void identify(Base *ptr);
void identify(Base &ptr);
Base *generate();

#endif