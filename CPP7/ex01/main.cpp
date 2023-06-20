#include "iter.hpp"

int main(){
	int			t1[6] = {0,5,10,20,30,50};
	std::string	t2[4] = {"Salut", "Bonjour", "Yo", "Hello"};
	char		t3[4] = {'S', 'B', 'Y', 'H'};

	::iter(t1, 6, &print);
	::iter(t2, 4, &print);
	::iter(t3, 4, &print);
}