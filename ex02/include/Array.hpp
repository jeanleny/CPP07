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
		Array() : _size(0), _array(0){};
		Array(unsigned int const& n) :  _size(n), _array(new T[n]){
			for (size_t i = 0 ; i < _size ; i++)
				_array[i] = T();
		};
		Array(Array<T>& cpy) : _size(cpy._size), _array(new T[cpy._size])
		{
			for (size_t i = 0; i < _size; i++)
				_array[i] = cpy._array[i];
		};
		Array<T>& operator=(const Array<T>& rhs)
		{
			delete [] _array;
			_array = new T[rhs._size];
			_size = rhs._size;
			if (this != &rhs)
				for (size_t i = 0; i < rhs._size; i++)
					this->_array[i] = rhs._array[i];
			return (*this);
		}
		T& operator[](size_t index)
		{
			if (index >= _size)
				throw OutOfBoundException();
			return 	(_array[index]);
		}
		const T& operator[](size_t index) const
		{
			if (index >= _size)
				throw OutOfBoundException();
			return 	(_array[index]);
		}
		~Array<T>()
		{
			delete [] _array;
		};
		size_t	size(){return (_size);};
	class	OutOfBoundException : public std::exception
	{
		public :
			const char * what() const throw()
			{
				return ("Index is out of bound");
			};
	};
};

#endif
