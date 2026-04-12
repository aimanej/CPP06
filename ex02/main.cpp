#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    std::srand(time(NULL));
    std::cout << "randomizer check" << std::endl;
    for (int t = 0; t < 5; t++)
    {
        Base *pp = generate();
        identify(pp);
        delete pp;
    }

    std::cout << "direct test" << std::endl;
    B test_b;
    C test_c;
    Base *op = &test_b;
    identify(op);h
    op = &test_c;
    identify(op);

    std::cout << "reference identifier check :" << std::endl;
    Base &ref = test_c;
    identify(ref);
}