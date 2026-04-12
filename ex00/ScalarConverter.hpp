#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <cmath>

class ScalarConverter
{
private:
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);

public:
	~ScalarConverter(void);
	static void convert(std::string input);
};

void display_float_literals(std::string input);
void display_double_literals(std::string input);
void display_int(std::string input);
void display_float(std::string input, int preci);
void display_double(std::string input, int preci);
void pseudo_func(std::string input);
int digits_handler(std::string input);

#endif
