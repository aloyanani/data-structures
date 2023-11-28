#pragma once
#include <iostream>

template <typename T>
class Queue
{
private:
	struct Node
	{
		T value;
		Node* next;

		Node(T _value):value(_value), next(nullptr){}
		Node() {};
	};
	Node* first;
	Node* rear;

public:
	
	Queue():first(nullptr), rear(nullptr){}
	

	~Queue()
	{
			while (!isEmpty())
			{
				dequeue();
			}
	}

    bool isEmpty()
	{
		return first == nullptr;
	}
	void enqueue(T _value)
	{

		Node* newNode = new Node(_value);
		if (first == nullptr)
		{
			first = newNode;
			rear = newNode;
			return;
		}
		rear->next = newNode;
		rear = newNode;

	}
	void dequeue()
	{
		if (first == nullptr) 
		{
			return;
		}
		Node* temp = first;
		first = first->next;
		delete temp;
	}
	T get_first()
	{
		if (first == nullptr)
		{ 
			std::cout << "Queue is empty." << std::endl;
			return 0;
		}
		 
		return first->value;
	}
	
	void print()
	{
		Node* temp = first;
		while (!isEmpty())
		{
			std::cout << temp->value << " ";
			temp = temp->next;
		}
		std::cout << std::endl;
	}
};
