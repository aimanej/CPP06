#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

class ScalarConverter {
	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter(void);
		static void convert(std::string input);
};

#endif
