#include "BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::ref;
BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref){*this = ref;}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &ref){(void)ref;return *this;}
BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::fillDatabase(std::string file){
	std::ifstream ifs(file);
	std::string tmp;
	std::getline(ifs, tmp);
	std::string sval;
	double val;
	while (std::getline(ifs, tmp, ',')){
		std::getline(ifs, sval, '\n');
		val = std::stod(sval);
		BitcoinExchange::ref[tmp] = val;
	}
	ifs.close();
}

std::map<std::string, double>& BitcoinExchange::getDatabase(){
	return BitcoinExchange::ref;
}

void BitcoinExchange::printDatabase(std::map<std::string, double> &ref){
	std::map<std::string, double>::iterator it = ref.begin();
	while (it != ref.end())
	{
		std::cout << it->first << " " << it->second << std::endl;
		it++;
	}
}

bool BitcoinExchange::checkLine(std::string line){
	if (line.size() < 14){
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	for (unsigned int i = 0; i < 13; i++){
		if (i == 4 || i == 7 || (i >= 10 && i <= 12)){
			if (((i == 4 || i == 7) && line[i] != '-') || (i == 11 && line[i] != '|')
				|| ((i == 10 || i == 12) && line[i] != ' ')){
				std::cout << "Error: bad input => " << line << std::endl;
				return false;
			}
		}
	}
	std::string value = line.substr(13);
	if (value[0] == '-'){
		std::cout << "Error: not a positive number => " << line << std::endl;
		return false;
	}
	int dot = 0;
	for (unsigned int i = 0; i < value.size(); i++){
		if (value[i] == '.')
			dot++;
		else if (value[i] < '0' || value[i] > '9'){
			std::cout << "Error: bad input => " << line << std::endl;
			return false;
		}
	}
	if (dot > 1){
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	if (std::stod(value) > 1000){
		std::cout << "Error: too large a number => " << line << std::endl;
		return false;
	}
	if (std::stod(line.substr(5, 2)) > 12 || std::stod(line.substr(8, 2)) > 31){
		std::cout << "Error: invalid date format => " << line << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::checkFile(std::string file){
	std::string line;
	std::ifstream ifs(file);
	
	if (!ifs.is_open()){
		std::cout << "File does not exist" << std::endl;
		return false;
	}
	std::getline(ifs, line);
	if (line != "date | value"){
		std::cout << "\"date | value\" missing line 1\n";
		return false;
	}
	return true;
}

void BitcoinExchange::convert(std::string date, double value){
	std::cout << date << " => " << value << " = ";
	std::map<std::string, double>::iterator it = ref.lower_bound(date);
	if (it != ref.begin() && it->first != date)
		it--;
	std::cout << it->second * value << std::endl;
	

}

void BitcoinExchange::exchange(std::string file){
	std::ifstream	ifs(file);
	std::string		line;

	if (BitcoinExchange::checkFile(file)){
		std::getline(ifs, line);
		while (std::getline(ifs, line)){
			if (BitcoinExchange::checkLine(line))
				BitcoinExchange::convert(line.substr(0, 10), std::stod(line.substr(13)));
		}
	}
}