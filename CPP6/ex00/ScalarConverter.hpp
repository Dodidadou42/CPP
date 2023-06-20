#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <float.h>

class ScalarConverter
{
	private :
		ScalarConverter();
	public :
		ScalarConverter(const ScalarConverter &ref);
		ScalarConverter& operator=(const ScalarConverter &ref);
		~ScalarConverter();

		static void convert(const char *str);
		static std::string getType(const char *str);
		static bool checkOverflow(std::string type,const char* str);
		static void convertChar(const char *str);
		static void convertInt(const char *str);
		static void convertFloat(const char *str);
		static void convertDouble(const char *str);
		static void	print(char c, int n, float f, double d, int p);
		static void printLiterals(const char *str);
};

#endif