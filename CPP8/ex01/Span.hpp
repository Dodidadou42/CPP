#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private : 
		std::vector <int>	_v;
		unsigned int		_n;
		Span();
	public : 
		Span(unsigned int n);
		Span(const Span &ref);
		Span& operator=(const Span &ref);
		~Span();

		void addNumber(int n);
		void addNumber(std::vector<int>::const_iterator first, std::vector<int>::const_iterator end);
		
		int shortestSpan();
		int longestSpan();

		std::vector<int> getVector();
		void print();

	class VectorFullException : public std::exception
	{
		public :
			virtual const char* what() const throw(){
				return ("Vector is already full");
			}
	};
	class TooFewValuesException : public std::exception
	{
		public :
			virtual const char* what() const throw(){
				return ("Too few values in vector");
			}
	};


};

#endif