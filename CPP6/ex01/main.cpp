#include "Data.hpp"
#include "Serializer.hpp"

int main(){
	Data *ptr = new Data();
	
	uintptr_t raw;
	Data *ptr2;

	std::cout << ptr << std::endl;
	raw = Serializer::serialize(ptr);
	std::cout << raw << std::endl;
	ptr2 = Serializer::deserialize(raw);
	std::cout << ptr2 << std::endl;
}