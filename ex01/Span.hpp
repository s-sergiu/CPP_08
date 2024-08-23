
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream> 

class Span {
	private:
		unsigned int N;
	public:
		Span(void);
		Span(unsigned int &);
		Span(const Span &);
		Span operator = (const Span &);
		~Span(void);
		void addNumber(int &) const;
		int longestSpan(void) const;
		int shortestSpan(void) const;
};

#endif
