
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream> 
#include <algorithm> 
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
		void addNumbersByRange(std::vector<int>::iterator, 
							   std::vector<int>::iterator);
		int longestSpan(void);
		int shortestSpan(void);
};

#endif
