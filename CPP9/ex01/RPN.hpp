#pragma once

#include <iostream>
#include <stack>
#include <deque>

class RPN
{
	private :
		static std::stack<double, std::deque<double> > _stack;

		RPN();
	public :
		RPN(const RPN &ref);
		RPN& operator=(const RPN &ref);
		~RPN();

		static void calculate(char *str);
};