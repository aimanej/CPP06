#include "ScalarConverter.hpp"


void pseudo_func(std::string input)
{
	std::string literals[8] = {"inf", "-inf", "+inf", "nan", "inff", "-inff", "+inff", "nanf"};

	for(int t = 0; t < 8; t++)
	{
		if(input == literals[t])
		{
			if(t <= 3)
				display_double_literals(input);
			else
				display_float_literals(input);
			exit(0);
		}
	}

}

void display_float_literals(std::string input)
{
    float num = std::strtof(input.c_str(), NULL);

    std::cout << "char: " << "impossible " << std::endl;
    std::cout << "int: " << "impossible " << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << num << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(num) << std::endl;
}

void display_double_literals(std::string input)
{
    double num = std::strtod(input.c_str(), NULL);

    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible " << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(num) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double: " << num << std::endl;
}

    

    

    