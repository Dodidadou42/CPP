#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T >
void iter(T *tab, int i, void (*f)(T &)){
	for (int j = 0; j < i; j++)
		f(tab[j]);
}

template < typename T >
void iter(const T *tab, int i, void (*f)(const T &)){
	for (int j = 0; j < i; j++)
		f(tab[j]);
}

template < typename T, typename A >
void iter(T *tab, int i, void (*f)(A &)){
	for (int j = 0; j < i; j++)
		f(tab[j]);
}

template < typename T, typename A >
void iter(const T *tab, int i, void (*f)(const A &)){
	for (int j = 0; j < i; j++)
		f(tab[j]);
}

template < typename T >
void print(T &v){
	std::cout << v << std::endl;
}

#endif