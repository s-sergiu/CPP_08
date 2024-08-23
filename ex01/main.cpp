
#include "Span.hpp"

int main(void) {
	Span obj(10);

	try {
		obj.addNumber(23);
		obj.addNumber(103);
		obj.addNumber(42);
		obj.addNumber(31);
		obj.addNumber(29);
		obj.addNumber(78);
		std::cout<<obj.longestSpan()<<std::endl;
		std::cout<<obj.shortestSpan()<<std::endl;
	} catch (std::exception &e) {
		std::cerr<<"Exception: "<<e.what()<<std::endl;
	}
	return 0;
}
