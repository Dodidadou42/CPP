#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private : 
		AMateria* _stock[4];
	public :
		MateriaSource();
		MateriaSource(const MateriaSource &ref);
		MateriaSource& operator=(const MateriaSource &ref);
		~MateriaSource();

		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const& type);
};

#endif