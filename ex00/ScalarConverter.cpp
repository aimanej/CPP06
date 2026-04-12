#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {}

int char_handler(std::string input)
{
	if (input.size() == 1 && std::isalpha(input[0]))
	{
		char c = input[0];
		std::cout << "char : " << c << std::endl;
		std::cout << "int : " << "Not displayable" << std::endl;
		std::cout << "float : " << "Not displayable" << std::endl;
		std::cout << "double : " << "Not displayable" << std::endl;
		exit(0);
	}
	return 0;
}

void display_int(std::string input)
{
	int num = stoi(input);

	std::cout << "char: " << "Non displayable " << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(num) << std::endl;
}

void display_float(std::string input, int preci)
{
	float num = stof(input);
	std::cout << "char: " << "Non displayable " << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << std::fixed << std::setprecision(preci) << "float: " << num << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(preci) << "double: " << static_cast<double>(num) << std::endl;
}

void display_double(std::string input, int preci)
{
	double num = stod(input);

	std::cout << "char: " << "Non displayable " << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << std::fixed << std::setprecision(preci) << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(preci) << "double: " << num << std::endl;
}



int digits_handler(std::string input)
{
	int dots = 0;
	int efs = 0;
	int ad = 0;
	for (int i = 0; input[i]; i++)
	{
		if(i == 0 && input[i] == '-' || input[i] == '+')
			continue;
		if (input[i] == '.')
			dots++;
		else if (input[i] == 'f')
			efs++;
		if (!isdigit(input[i]) && input[i] != 'f' && input[i] != '.')
		{
			pseudo_func(input);
			std::cout << "input format not accepted 1" << std::endl;
			exit(0);
		}
		if(dots && isdigit(input[i]))
			ad++;
		
	}
	std::cout << "precision points : " << ad << std::endl;
	if (dots > 1 || efs > 1)
	{
		std::cout << "input format not accepted" << std::endl;
		exit(0);
	}
	else if (dots == 0 && efs == 0)
		display_int(input);
	else if (efs)
		display_float(input, ad);
	else
		display_double(input, ad);
	return 1;
}

void ScalarConverter::convert(std::string input)
{
	char_handler(input);
	digits_handler(input);
}