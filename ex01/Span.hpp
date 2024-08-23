
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream> 
#include <vector> 

class Span {
	private:
		std::vector<int>	collection;
		unsigned int		N;
	public:
		Span(void);
		Span(unsigned int);
		Span(const Span &);
		Span operator = (const Span &);
		~Span(void);
		void addNumber(int);
		int longestSpan(void) const;
		int shortestSpan(void) const;
};

#endif
