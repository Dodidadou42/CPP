#pragma once

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
	private :
		BitcoinExchange();
		static std::map<std::string, double> ref;
	public : 
		BitcoinExchange(const BitcoinExchange &ref);
		BitcoinExchange& operator=(const BitcoinExchange &ref);
		~BitcoinExchange();

		static void fillDatabase(std::string file);
		static std::map<std::string, double>& getDatabase();
		static void printDatabase(std::map<std::string, double> &ref);
		static void exchange(std::string file);
		static void convert(std::string date, double value);
		static bool checkFile(std::string file);
		static bool checkLine(std::string line);

		/*class InvalidFileNameException : public std::exception
		{
			public :
				virtual const char * what() const throw(){
					return "File does not exist";
				} 
		};*/

};

