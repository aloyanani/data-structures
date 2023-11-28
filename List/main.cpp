#include <iostream>
#include "list.h"

int main() {
	List<int> vec(6);
	vec.push_front(5);
	vec.push_front(21);
	vec.push_front(9);
	vec.push_front(6);
	
	vec.push_back(5);
	vec.push_back(8);
	vec.push_front(8);
	vec.print();
	bool a = vec.empty();
	if (a == 0)
		std::cout << "an"<<std::endl;
	std::cout << vec.minimum() << std::endl;
	vec.remove(5);
	vec.print();
	std::cout << vec.minimum() << std::endl;
	std::cout << vec.maximum() << std::endl;
}
