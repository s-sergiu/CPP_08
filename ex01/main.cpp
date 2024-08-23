
#include "Span.hpp"

int main(void) {
	Span obj(2);

	try {
		obj.addNumber(4);
		obj.addNumber(2);
		obj.addNumber(3);
	} catch (std::exception &e) {
		std::cerr<<"Exception: "<<e.what()<<std::endl;
	}
	return 0;
}
