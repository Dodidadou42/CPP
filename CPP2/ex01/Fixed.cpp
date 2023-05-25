#include "Fixed.hpp"

Fixed::Fixed() : _raw(0){std::cout << "Default constructor called" << std::endl;}
Fixed::Fixed(const int n) : _raw(n << _bits){ std::cout << "Int constructor called" << std::endl;}
Fixed::Fixed(const float n) : _raw(std::roundf(n * (1 << _bits))){std::cout << "Float constructor called" << std::endl;}
Fixed::Fixed(const Fixed &fix){std::cout << "Copy constructor called" << std::endl;*this = fix;}
Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

int		Fixed::getRawBits(void) const{return this->_raw;}
void	Fixed::setRawBits(const int raw){this->_raw = raw;}
float	Fixed::toFloat(void) const{return static_cast<float>(this->getRawBits()) / (1 << _bits);}
int		Fixed::toInt(void) const{return (this->_raw >> _bits);}

Fixed& Fixed::operator=(const Fixed &fix){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->_raw = fix.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream &o, Fixed const & f){
	o << f.toFloat();
	return o;
}

