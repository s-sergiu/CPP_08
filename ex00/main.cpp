
#include "easyfind.hpp"

int main(void) {
	
	int container[] = {37, 42, 69};
	try {
		int it;

		it = easyfind(container, container + 4, 69);
	} catch (std::exception &e) {
		std::cerr<<"Error: "<<e.what()<<std::endl;
	}
}
