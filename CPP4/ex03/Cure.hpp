#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure &ref);
		Cure& operator=(const Cure &ref);
		~Cure();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif