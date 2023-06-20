#include "Span.hpp"

Span::Span(unsigned int n) : _n(n){}
Span::Span(const Span &ref){*this = ref;}
Span& Span::operator=(const Span &ref){
	if(this!=&ref){
		this->_n=ref._n;
		this->_v=ref._v;
	}
	return *this;
}
Span::~Span(){}

void Span::addNumber(int n){
	if (this->_v.size() < this->_n)
		this->_v.push_back(n);
	else
		throw Span::VectorFullException();
}

void Span::addNumber(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last){
	while (first != last){
		this->addNumber(*first);
		first++;
	}
}

int Span::longestSpan(){
	if (this->_v.size() < 2)
		throw Span::TooFewValuesException();
	int max = *std::max_element(this->_v.begin(), this->_v.end());
	int min = *std::min_element(this->_v.begin(), this->_v.end());
	return (max - min);
}

int Span::shortestSpan(){
	int span = this->longestSpan();
	for (std::vector<int>::const_iterator it = this->_v.begin(); it != this->_v.end(); it++){
		for (std::vector<int>::const_iterator it2 = this->_v.begin(); it2 != this->_v.end(); it2++){
			if (it != it2 && std::abs(*it - *it2) < span)
				span = std::abs(*it - *it2);
		}
	}
	return span;
}

std::vector<int> Span::getVector(){
	return this->_v;
}

void Span::print(){
	int i = 0;
	for (std::vector<int>::const_iterator it = this->_v.begin(); it != this->_v.end(); it++){
		std::cout << *it << " | ";
		i++;
		if (i > 30){
			std::cout << std::endl;
			i = 0;
		}
	}
	std::cout << std::endl;
}

