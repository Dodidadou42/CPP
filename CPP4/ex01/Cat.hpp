#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *_brain;
	public :
		Cat();
		Cat(const Cat &ref);
		Cat& operator=(const Cat &ref);
		~Cat();

		virtual void		makeSound() const;
};

#endif
