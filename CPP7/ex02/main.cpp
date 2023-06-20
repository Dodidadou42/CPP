#include "Array.hpp"

int main(){
	Array<int> tab1(5);

	for (int i = 0; i < 5; i++){
		tab1[i] = i * 2;
		std::cout << tab1[i] << std::endl;
	}

	std::cout << std::endl;
	Array<char> tab2(5);

	for (int i = 0; i < 5; i++){
		tab2[i] = i + 100;
		std::cout << tab2[i] << std::endl;
	}

	std::cout << std::endl;
	Array<float> tab3(5);

	for (int i = 0; i < 5; i++){
		tab3[i] = i * 3;
		std::cout << tab3[i] << std::endl;
	}

	try
	{
		std::cout << tab3[50] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}