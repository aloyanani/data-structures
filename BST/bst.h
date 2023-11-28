
#include <iostream>

template <typename T>
class Tree
{
	struct Node
	{
		T value;
		Node* right;
		Node* left;

		Node(T _value) :value(_value), right(nullptr), left(nullptr) {}

	};

	Node* root;

	Tree() :root(nullptr){}
	~Tree()
	{

	}

	void insert(T _value)
	{
		
		if root == nullptr)
		{
			root->value = _value;
			return;
		}

		Node* current = root;

		while (current != nullptr)
		{
			if (current->value == _value)
			{
				return;
			}

			if (current->value > _value)
			{
				current = current->left;

				if (current == nullptr)
				{
					current->value = _value;
					return;
				}
				continue;

		    }
		    

			if (current->value < _value)
			{
				current = current->right;

				if (current == nullptr)
				{
					current->value = _value;
					return;
				}

				continue;
			}
				
		
		}

		
	}


	void inordertraversal()
	{
		Node* current = root;
		while (current->left != nullptr)
		{
			current = current->left;

		}
		std::cout << current->value << " ";
		
		
		inordertraversal();

	}
};




	
