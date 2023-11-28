#pragma once
#include <iostream>

#define MAX 1000

template <typename T>
class Stack {
private:
	int top; 
	T arr[MAX];

public:
	Stack()
	{
		top = -1;
	}

	void push(T value)
	{
		if (top == MAX - 1)
		{
			std::cout << "Stack overflow" << std::endl;
			return;
		}

		arr[++top] = value;

	}
	T pop()
	{
		if (top < 0)
		{
			std::cout << "Stack is empty." << std::endl;
			return 0;
		}

		return arr[top--];

	}

	T get_top()
	{
		if (top < 0)
		{
			std::cout << "Stack is empty." << std::endl;
			return 0;
		}
		return arr[top];
	}

	bool isEmpty()
	{
		return top < 0;
	}

	void print()
	{
		if (top < 0)
		{
			std::cout << "Stack is empty." << std::endl;
			return;
		}

		for (int i = 0; i <= top; ++i)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}

	

};
