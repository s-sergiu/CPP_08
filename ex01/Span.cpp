
#include "Span.hpp"

Span::Span(void) {
}

Span::Span(unsigned int number) {
	this->N = number;
}

Span::Span(const Span &src) {
	this->collection = src.collection;
	this->N = src.N;
}

Span Span::operator = (const Span &src) {
	if (this != &src) {
		this->collection = src.collection;
		this->N = src.N;
	}
	return *this;
}

Span::~Span(void) {

}

void Span::addNumber(int arg) {
	if (this->collection.size() == N) {
		throw std::out_of_range("full");
	} else {
		this->collection.push_back(arg);
	}
}

int Span::longestSpan(void) {
	std::vector<int>::iterator itMax;
	std::vector<int>::iterator itMin;
	int ret;
	
	if (collection.size() < 2)
		throw std::out_of_range("size");
	itMin = std::min_element(collection.begin(), collection.end());
	itMax = std::max_element(collection.begin(), collection.end());
	ret = *itMax - *itMin;
	return ret;
}

int Span::shortestSpan(void) {
	std::vector<int>::iterator itMin;
	int ret;	

	if (collection.size() < 2)
		throw std::out_of_range("size");
	std::sort(collection.begin(), collection.end());
	itMin = std::min_element(collection.begin(), collection.end());
	ret = collection.at(1) - *itMin;

	return ret;
}

void Span::addNumbersByRange(std::vector<int>::iterator start, 
					   std::vector<int>::iterator end) {
	this->collection.insert(collection.end(), start, end);
}
