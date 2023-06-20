#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T >
void iter(T *tab, int i, void (*f)(T &)){
	for (int j = 0; j < i; j++)
		f(tab[j]);
}

template < typename T >
void print(T &v){
	std::cout << v << std::endl;
}

#endif