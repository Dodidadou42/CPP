#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private : 
		int	_raw;
		static const int _bits = 8;
	public :
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &fix);
		~Fixed();

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&		min(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static Fixed&		max(Fixed &a, Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);

		bool	operator>(const Fixed &fix);
		bool	operator>=(const Fixed &fix);
		bool	operator<(const Fixed &fix);
		bool	operator<=(const Fixed &fix);
		bool	operator==(const Fixed &fix);
		bool	operator!=(const Fixed &fix);

		Fixed	operator+(const Fixed &fix);
		Fixed	operator-(const Fixed &fix);
		Fixed	operator*(const Fixed &fix);
		Fixed	operator/(const Fixed &fix);

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		Fixed&	operator=(const Fixed &fix);
};

std::ostream & operator<<(std::ostream &o, Fixed const & f);

#endif