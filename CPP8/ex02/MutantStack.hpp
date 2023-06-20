#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <deque>
#include <stack>

template <typename T, class Container = std::deque< T > >
class MutantStack : public std::stack<T, Container>
{
	public : 
		MutantStack(){}
		MutantStack(const MutantStack &ref){*this=ref;}
		MutantStack& operator=(const MutantStack &ref){
			if (this != &ref)
				this->c = ref.c;
			return *this;
		}
		~MutantStack(){}
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		iterator begin(){
			return this->c.begin();
		}
		const_iterator begin() const {
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
		const_iterator end() const{
			return this->c.end();
		}



	
};

#endif