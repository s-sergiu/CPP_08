
#include "Span.hpp"

Span::Span(void) {
}

Span::Span(unsigned int number) {
	this->N = number;
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

void Span::addNumber(int arg) {
	if (this->collection.size() == N) {
		std::cout<<"size: "<<collection.size()<<std::endl;
		throw std::out_of_range("full");
	} else {
		this->collection.push_back(arg);
		std::cout<<"Added "<<arg<<" to the collection!"<<std::endl;
	}
}

int Span::longestSpan(void) const {
	return (1);
}

int Span::shortestSpan(void) const {
	return (1);
}
