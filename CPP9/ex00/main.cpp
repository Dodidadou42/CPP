#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
	if (argc == 2){
		BitcoinExchange::fillDatabase("data.csv");
		BitcoinExchange::exchange(argv[1]);
	}
	else
		std::cout << "Error: invalid argument number\n";
}