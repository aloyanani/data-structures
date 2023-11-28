#include <iostream>
#include <list>
#include "hash.h"

int main()
{

	Hash<int, int> table;
	table.insert(12, 3);
	std::cout << "asd" << std::endl;
	std::cout << table.get(12);
	return 0;
}

