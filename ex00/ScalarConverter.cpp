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
	if (input.size() == 1)
	{
		char c = input[0];
		std::cout << "char : '" << c << "'" << std::endl;
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		std::cout << "float : " << static_cast<float>(c) << std::endl;
		std::cout << "double : " << static_cast<double>(c) << std::endl;
		exit(0);
	}
	return 0;
}

void display_int(std::string input)
{
	int num = atoi(input.c_str());

	if (num <= 31 || num >= 127)
		std::cout << "char: " << "Not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(num) << std::endl;
	exit(0);
}

void display_float(std::string input, int preci)
{
	float num = strtof(input.c_str(), NULL);
	if (num <= 31 || num >= 127)
		std::cout << "char: " << "Not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << std::fixed << std::setprecision(preci) << "float: " << num << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(preci) << "double: " << static_cast<double>(num) << std::endl;
	exit(0);
}

void display_double(std::string input, int preci)
{
	double num = strtod(input.c_str(), NULL);

	if (num <= 31 || num >= 127)
		std::cout << "char: " << "Not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << std::fixed << std::setprecision(preci) << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(preci) << "double: " << num << std::endl;
	exit(0);
}

void  digits_handler(std::string input)
{
	int dots = 0;
	int efs = 0;
	int ad = 0;
	for (int i = 0; input[i]; i++)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			continue;
		if (input[i] == '.')
			dots++;
		else if (input[i] == 'f')
			efs++;
		if (!isdigit(input[i]) && input[i] != 'f' && input[i] != '.')
		{
			pseudo_func(input);
			return ;
		}
		if (dots && isdigit(input[i]))
			ad++;
	}
	if (dots > 1 || efs > 1)
		return ;
	else if (dots == 0 && efs == 0)
		display_int(input);
	else if (efs && dots == 1)
		display_float(input, ad);
	else if (dots)
		display_double(input, ad);

	return ;
}

void ScalarConverter::convert(std::string input)
{
	digits_handler(input);
	char_handler(input);

	std::cout << "input format not accepted 1" << std::endl;
}