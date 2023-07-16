#include "RPN.hpp"
std::stack<double, std::deque<double> > RPN::_stack;
RPN::RPN(const RPN &ref){*this = ref;}
RPN& RPN::operator=(const RPN &ref){(void)ref;return *this;}
RPN::~RPN(){}

void RPN::calculate(char *str){
	double a, b;
	while (*str){
		if (std::isdigit(*str))
			RPN::_stack.push(*str - 48);
		else if (*str == '+' || *str == '-' || *str == '*' || *str == '/'){
			if (RPN::_stack.size() < 2)
				std::cout << "Error: not a reverse polish notation" << std::endl;
			else {
				a = RPN::_stack.top();
				RPN::_stack.pop();
				b = RPN::_stack.top();
				RPN::_stack.pop();
				if (*str == '+')
					RPN::_stack.push(b + a);
				else if (*str == '-')
					RPN::_stack.push(b - a);
				else if (*str == '*')
					RPN::_stack.push(b * a);
				else if (*str == '/')
					RPN::_stack.push(b / a);
			}
		}
		str++;
	} 
	std::cout << RPN::_stack.top() << std::endl;
}