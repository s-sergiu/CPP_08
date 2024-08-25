
#ifndef MUTANT_HPP
#define MUTANT_HPP

#include <stack>

template<class T, class Container = std::stack<T> >
class MutantStack : public Container { 
	public:
		typedef typename Container::container_type::iterator iterator;
		typedef typename Container::container_type::const_iterator const_iterator;
		iterator begin(void) { return this->c.begin(); };
		iterator end(void) { return this->c.end(); };
		const_iterator c_begin(void) { return this->c.c_begin(); };
		const_iterator c_end(void) { return this->c.c_end(); };
};

#endif
