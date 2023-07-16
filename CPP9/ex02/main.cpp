#include "PmergeMe.hpp"



std::string checkArgs(int argc, char **argv){
	if (argc < 2){
		std::cout << "Error: invalid argument quantity\n";
		return ""; 
	}
	std::string str = "";
	int i = 0;
	if (argc == 2){
		
		str += argv[1];
		while (str.find(' ') != std::string::npos)
			str.erase(str.find(' '), 1);
	} else 
		while (argv[++i])
			str += argv[i];
	for (unsigned int j = 0; j < str.size() - 1; j++){
		if (str[j] < '0' || str[j] > '9'){
			std::cout << "Error: invalid positive integers list" << std::endl;
			return "";
		}
	}
	return str;
}

int main(int argc, char **argv){
	std::string str = checkArgs(argc, argv);
	if (str.empty())
		return 0;

	PmergeMe::fillContainers(argc, argv);

	std::cout << "Before:   ";
	PmergeMe::printContainers("deque");

	double duration_vector = PmergeMe::vectorSort();
	double duration_deque = PmergeMe::dequeSort();

	std::cout << "After:    ";
	PmergeMe::printContainers("deque");

	std::cout << std::fixed << "Time to process a range of " << PmergeMe::getV().size() << " elements with std::vector : " << duration_vector << " ms" << std::endl;
	std::cout << std::fixed << "Time to process a range of " << PmergeMe::getV().size() << " elements with std::deque : " << duration_deque << " ms" << std::endl;
	
	
}