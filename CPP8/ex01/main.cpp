#include "Span.hpp"

int main(){
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Span span(5);
		span.addNumber(1);
		span.addNumber(10);
		span.addNumber(100);
		span.addNumber(1000);
		span.addNumber(10000);
		span.print();
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		span.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Span span2(2);
		span2.addNumber(1);
		span2.print();
		span2.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Span span3(15000);
		for (int i = 0; i < 15000; i++)
			span3.addNumber(i * 3);
		//span3.print();
		std::cout << span3.longestSpan() << std::endl;
		std::cout << span3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Span span(5);
		span.addNumber(1);
		span.addNumber(10);
		span.addNumber(100);
		span.addNumber(1000);
		span.addNumber(10000);
		span.print();
		Span span2(15000);
		for (int i = 0; i < 10; i++)
			span2.addNumber(i * 3);
		span2.print();
		std::vector<int>::const_iterator it = span.getVector().begin();
		std::vector<int>::const_iterator itend = span.getVector().end();
		span2.addNumber(it, itend);
		span2.print();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}