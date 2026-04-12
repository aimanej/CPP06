#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *create_A()
{
    Base *ptr = new A;
    return ptr;
}
Base *create_B()
{
    Base *ptr = new B;
    return ptr;
}
Base *create_C()
{
    Base *ptr = new C;
    return ptr;
}

Base *generate()
{
    Base *(*funcptr[3])() = {&create_A, &create_B, &create_C};
    
    int num = rand() % 3;
    Base *ptr = funcptr[num]();
    return ptr;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch (std::exception &e)
    {
    }
}
