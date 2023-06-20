#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected : 
		std::string _type;
	public :
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &ref);
		WrongAnimal& operator=(const WrongAnimal &ref);
		virtual ~WrongAnimal();

		void		makeSound() const;
		std::string	getType() const;
};

#endif

