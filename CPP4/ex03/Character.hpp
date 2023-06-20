#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private :
		std::string _name;
		AMateria*	_items[4];
	public :
		Character(std::string name);
		Character(const Character &ref);
		Character& operator=(const Character &ref);
		~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};


#endif