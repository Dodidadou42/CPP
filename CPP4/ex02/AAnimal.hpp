#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected : 
		std::string _type;
	public :
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &ref);
		AAnimal& operator=(const AAnimal &ref);
		virtual ~AAnimal();

		virtual void		makeSound() const = 0;
		std::string	getType() const;
};

#endif

