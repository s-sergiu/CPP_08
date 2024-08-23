
#include "Span.hpp"

int main(void) {
	Span obj(10);
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	try {
		obj.addNumber(23);
		obj.addNumber(103);
		obj.addNumber(42);
		obj.addNumber(31);
		obj.addNumber(29);
		obj.addNumber(78);
		//obj.addNumbersByRange(vec.begin(), vec.end());
		std::cout<<obj.longestSpan()<<std::endl;
		std::cout<<obj.shortestSpan()<<std::endl;
	} catch (std::exception &e) {
		std::cerr<<"Exception: "<<e.what()<<std::endl;
	}
	return 0;
}
