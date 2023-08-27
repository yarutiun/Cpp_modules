#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack(): std::stack<T>(){}
        ~MutantStack(){};
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack(const MutantStack &st)
        {
            *this = st;
        }
        MutantStack& operator=(const MutantStack& other)
        {
            std::stack<T>::operator=(other);
            return *this;
        }

	iterator begin()
    {
		return std::stack<T>::c.begin();
	}

	iterator end()
    {
		return std::stack<T>::c.end();
	}
};

#endif