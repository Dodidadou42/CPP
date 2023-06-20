#include "Fixed.hpp"

Fixed::Fixed() : _raw(0){ std::cout << "Default constructor called" << std::endl;}
Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}
Fixed::Fixed(const Fixed &fix){std::cout << "Copy constructor called" << std::endl;this->_raw = fix.getRawBits();}
Fixed& Fixed::operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->_raw = fix.getRawBits();
	return *this;
}
int		Fixed::getRawBits(void) const{std::cout << "getRawBits member fonction called" << std::endl;return this->_raw;}
void	Fixed::setRawBits(const int raw){std::cout << "setRawBits member fonction called" << std::endl;this->_raw = raw;}