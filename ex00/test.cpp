#include <iostream>
#include <cstdlib>
#include <cerrno>

int main(int ac , char **av)
{
    if(ac == 2)
    {
        char *pend;
        std::cout << "error : " << errno << std::endl;
        double tt = strtod(av[1], &pend);
        std::cout << pend << std::endl;
        std::cout << "error afer : " << errno << std::endl;
        std::cout << tt << std::endl;

    }
}