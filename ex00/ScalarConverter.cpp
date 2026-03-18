#include "ScalarConverter.hpp"
#include <iomanip>


ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {}

int char_handler(std::string input)
{
	if(input.size() == 1 && std::isalpha(input[0]))
	{
		std::cout << "char : " << input[0] << std::endl;
		std::cout << "int : " << "Not displayable" << std::endl;
		std::cout << "float : " << "Not displayable" << std::endl;
		std::cout << "double : " << "Not displayable" << std::endl;

	}
	return 0;
}

void dispint(std::string input)
{
	std::cout << "char: not displayable" << std::endl;
	std::cout << "int : " << input << std::endl;
	std::cout << "float : " << std::stof(input) << std::endl;
	std::cout << "double : " << std::stod(input) << std::endl;
}

int digits_handler(std::string input)
{
	int dots = 0;
	int efs = 0;
	for(int i = 0; input[i]; i++)
	{
		if(input[i] == '.')
			dots++;
		else if (input[i] == 'f')
			efs++;
		if(!isdigit(input[i]) && input[i] != 'f' && input[i] != '.')
			{
				std::cout << "result  " << !isdigit(input[i]) << " tried <<   " <<  input[i] << std::endl;
				std::cout << "input format not accepted 1" << std::endl;
				exit(0);
			}
	}
	if(dots > 1 || efs > 1)
	{
		std::cout << "input format not accepted" << std::endl;
		exit(0);
	}
	if(dots == 0 && efs == 0)
		dispint(input);
	return 1;

}

void ScalarConverter::convert(std::string input)
{
	char_handler(input);
	digits_handler(input);
	std::cout << "working print" << std::endl;
}