#include "ScalarConverter.hpp"


void pseudo_func(std::string input)
{
	std::string literals[7] = {"inf", "-inf", "+inf", "nan", "-inff", "+inff", "nanf"};

	for(int t = 0; t < 7; t++)
	{
		if(input == literals[t])
		{
			if(t < 3)
				display_double_literals(input);
			else
				display_float_literals(input);
			exit(0);
		}
	}

}

void display_float_literals(std::string input)
{
    float num = std::stof(input);

    std::cout << "char: " << "Non displayable " << std::endl;
    std::cout << "int: " << "Non displayable " << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << num << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(num) << std::endl;
}

void display_double_literals(std::string input)
{
    double num = std::stod(input);

    std::cout << "char: " << "Non displayable " << std::endl;
    std::cout << "int: " << "Non displayable " << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<double>(num) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double: " << num << std::endl;
}

    

    

    