#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice &ref);
		Ice& operator=(const Ice &ref);
		~Ice();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif