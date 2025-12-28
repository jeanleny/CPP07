#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<class T>
class Array
{
	private :
		size_t	_size;
	public :
		T	*_array;
		Array() : _size(0), _array(0){std::cout << "Dflt" << std::endl;};
		Array(unsigned int const& n) :  _size(n), _array(new T[n]){
			for (size_t i = 0 ; i < _size ; i++)
				_array[i] = T();
		};
		size_t	size(){return (_size);};
	
};

#endif
