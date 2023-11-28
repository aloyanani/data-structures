#include <iostream>
#include "queue.h"


int main()
{
	Queue<int> vec;
	vec.enqueue(5);

	int a;
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> a;
		vec.enqueue(a);


	}
	vec.print();

}
