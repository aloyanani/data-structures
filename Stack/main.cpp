#include <iostream>
#include "stack.h"

template <typename T>
bool Max_top(Stack<T> arr)
{
	if (arr.isEmpty())
	{
		std::cout << "Stack is empty." << std::endl;
		return 0;
	}

	T max = arr.pop();
	while (!arr.isEmpty())
	{
		if (max < arr.pop())
		{
			return false;
		}
	}
	return true;

}
template <typename T>
void reverce(Stack<T> arr)
{

}

int main()
{
	Stack<int> arr;
	arr.push(5);
	arr.push(6);
	arr.push(7);
	int a;
	for (int i = 10; i > 0; --i)
	{
		std::cin >> a;
		arr.push(a);
	}
	arr.print();
	//std::cout << arr.pop() << std::endl;
	std::cout << arr.get_top() << std::endl;
	arr.print();
	
	
	if (Max_top(arr)) {
		std::cout << "Top is max element." << std::endl;
	}
	else
	{
		std::cout << "Top is not max element." << std::endl;
	}
	arr.print();
}
