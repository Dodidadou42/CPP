#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

Base* generate(){
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(0, 2);
	int n = distribution(gen);
	std::cout << n << std::endl;
	Base *ret[3] = {new A(), new B(), new C()};
	return ret[n];
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A ptr" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B ptr" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C ptr" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p){
	try{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A ref" << std::endl;
	}
	catch (std::exception &e){}
	try{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B ref" << std::endl;
	}
	catch (std::exception &e){}
	try{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C ref" << std::endl;
	}
	catch (std::exception &e){}
}

int main(){
	Base *a = generate();
	Base *b = generate();
	Base &c = *a;
	identify(a);
	identify(b);
	identify(c);
}