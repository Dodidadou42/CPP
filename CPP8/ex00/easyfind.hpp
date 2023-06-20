#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <map>

class NotFoundException : public std::exception
{
	public : 
		virtual const char* what() const throw(){
			return ("Not found.");
		}
};

template < typename T >
void easyfind(T &ctn, int n){
	if (std::find(ctn.begin(), ctn.end(), n) != ctn.end())
		std::cout << "Found !" << std::endl;
	else
		throw NotFoundException();
}



#endif