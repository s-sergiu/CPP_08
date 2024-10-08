
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main(void) {
	
	std::vector<int> vec;
	std::vector<int>::iterator it;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(69);
	vec.push_back(30);
	vec.push_back(20);
	vec.push_back(23);
	vec.push_back(9);
	try {
		it = easyfind(vec, 20);
		std::cout<<it - vec.begin()<<std::endl;
	} catch (std::exception &e) {
		std::cerr<<"Error: "<<e.what()<<std::endl;
	}
}
