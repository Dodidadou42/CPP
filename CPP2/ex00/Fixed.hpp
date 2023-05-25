#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private : 
		int	_raw;
		static const int _bits = 8;
	public :
		Fixed();
		Fixed(const Fixed &fix);
		Fixed& operator=(const Fixed &fix);
		~Fixed();
		int getRawBits(void) const;
		void	setRawBits(int const raw);
};



#endif