#include "Fixed.hpp"

Fixed::Fixed() : _raw(0){}
Fixed::Fixed(const int n) : _raw(n << _bits){}
Fixed::Fixed(const float n) : _raw(std::roundf(n * (1 << _bits))){}
Fixed::Fixed(const Fixed &fix){*this = fix;}
Fixed::~Fixed(){}

int		Fixed::getRawBits(void) const{return this->_raw;}
void	Fixed::setRawBits(const int raw){this->_raw = raw;}
float	Fixed::toFloat(void) const{return static_cast<float>(this->getRawBits()) / (1 << _bits);}
int		Fixed::toInt(void) const{return (this->_raw >> _bits);}

Fixed&			Fixed::min(Fixed &a, Fixed &b){return (a.getRawBits() > b.getRawBits() ? b : a);}
const Fixed&	Fixed::min(const Fixed &a, const Fixed &b){return (a.getRawBits() > b.getRawBits() ? b : a);}
Fixed&			Fixed::max(Fixed &a, Fixed &b){return (a.getRawBits() < b.getRawBits() ? b : a);}
const Fixed&	Fixed::max(const Fixed &a, const Fixed &b){return (a.getRawBits() < b.getRawBits() ? b : a);}

bool	Fixed::operator>(const Fixed &fix){return this->toFloat() > fix.toFloat();}
bool	Fixed::operator>=(const Fixed &fix){return this->toFloat() >= fix.toFloat();}
bool	Fixed::operator<(const Fixed &fix){return this->toFloat() < fix.toFloat();}
bool	Fixed::operator<=(const Fixed &fix){return this->toFloat() <= fix.toFloat();}
bool	Fixed::operator==(const Fixed &fix){return this->toFloat() == fix.toFloat();}
bool	Fixed::operator!=(const Fixed &fix){return this->toFloat() != fix.toFloat();}

Fixed	Fixed::operator+(const Fixed &fix){return Fixed(this->toFloat() + fix.toFloat());}
Fixed	Fixed::operator-(const Fixed &fix){return Fixed(this->toFloat() - fix.toFloat());}
Fixed	Fixed::operator*(const Fixed &fix){return Fixed(this->toFloat() * fix.toFloat());}
Fixed	Fixed::operator/(const Fixed &fix){return Fixed(this->toFloat() / fix.toFloat());}

Fixed&	Fixed::operator++(void){++this->_raw;return *this;}
Fixed	Fixed::operator++(int){Fixed ret(*this);this->_raw++;return ret;}
Fixed&	Fixed::operator--(void){--this->_raw;return *this;}
Fixed	Fixed::operator--(int){Fixed ret(*this);this->_raw--;return ret;}

Fixed& Fixed::operator=(const Fixed &fix){if (this != &fix)this->_raw = fix.getRawBits();return *this;}

std::ostream & operator<<(std::ostream &o, Fixed const & f){
	o << f.toFloat();
	return o;
}

