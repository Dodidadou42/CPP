#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template < typename T > 
class Array
{
	private :
		T*	_array;
		int	_size;
	public :
		Array() : _array(nullptr), _size(0){}
		Array(unsigned int n) : _size(n){
			this->_array = new T[n]();
		}
		Array(const Array& ref) : _array(new Array[ref._size]()), _size(ref._size){
			if (ref._size > 0)
				for (int i = 0; i < ref._size; i++)
					this->_array[i] = ref._array[i];
		}
		Array& operator=(const Array &ref){
			if (this->_size > 0)
				delete this->_array;
			if (this != &ref){
				this->_array = new Array[ref._size]();
				this->_size = ref._size;
				if (ref._size > 0)
					for (int i = 0; i < ref._size; i++)
						this->_array[i] = ref._array[i];
			}
			return *this;
		}
		~Array(){}

		int size() const{
			return this->_size;
		}

		class OutOfBondsException : public std::exception
		{
			public : 
				virtual const char* what() const throw(){
					return ("Index is out of bonds");
				}
		};

		T & operator[](int index){
			if (index >= this->_size)
				throw OutOfBondsException();
			return this->_array[index];
		}
};


#endif