
#include "Span.hpp"

Span::Span(void) {
}

Span::Span(unsigned int &number) {
	(void)number;
}

Span::Span(const Span &src) {
	(void)src;
}

Span Span::operator = (const Span &src) {
	(void)src;
	return *this;
}

Span::~Span(void) {

}

void Span::addNumber(int &arg) const {
	(void)arg;
	std::cout<<"addNumber"<<std::endl;
}

int Span::longestSpan(void) const {
	return (1);
}

int Span::shortestSpan(void) const {
	return (1);
}
