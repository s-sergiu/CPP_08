
#include "easyfind.hpp"
#include <vector>
#include <set>

int main(void) {
	
	std::vector<int> vec;
	std::vector<int>::iterator it;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(69);
	vec.push_back(30);
	try {
		it = easyfind(vec, 69);
		std::cout<<vec.end() - it<<std::endl;
	} catch (std::exception &e) {
		std::cerr<<"Error: "<<e.what()<<std::endl;
	}
}
