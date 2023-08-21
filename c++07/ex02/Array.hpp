#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <class T> class Array
{
private:
    T *_arr;
    size_t _nSize;

public:
    
    size_t size() const
    {
        return(_nSize);
    }

    Array(): _arr(NULL), _nSize(0)
    {

    }

    const Array &operator=(const Array &a)
    {
        for(int i = 0; i < a._nSize; i++)
            _arr[i] = a._arr[i];
        _nSize = a._nSize;
    }

    Array(const Array &a)
    {
		_nSize = a.size();
		_arr = new T[_nSize];
		for (unsigned int i = 0; i < _nSize; ++i)
			_arr[i] = a._arr[i];
    }

    Array(unsigned int n)
    {
        _arr = new T [n];
        _nSize = n;
    }


    T &operator[](unsigned int n)
    {
        if(n >= _nSize)
            throw outOfBounds();
        return(_arr[n]);
    }

    ~Array()
    {
        if(_nSize)
            delete [] _arr;
        std::cout << "Destructor called" << std::endl;
    }

    class outOfBounds: public std::exception {
        public:
            virtual const char *what() const throw()
            {
               return("Out of bounds bruh"); 
            }
    }; 
};


#endif