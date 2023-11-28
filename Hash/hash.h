#include<iostream>
#include<string>
#include <list>




template <typename T, typename U>

class Hash
{
private:
	static const int size = 10;
	std::list<std::pair<T, U>> myMap[size];


public:
	
	int hash_code(int key)
	{
		return key % 10;

	}

	int hash_code(char key)
	{
		return key;
	}

 int hash_code(std::string key)
 {	 
	 int sum = 0;
	 for (int i = 0; i < key.size(); ++i)
	 {
	 	sum += key[i];
     }

 	return sum % 10;
 }

	void insert(T key, U value)
	{
		
		int _key = hash_code(key);
		myMap[_key].emplace_back(key, value);
	}

	U get(T key)
	{
		int _key = hash_code(key);
		for (const auto& pair : myMap[_key])
		{
			if (pair.first == key)
			{
				return pair.second;
			}

		}
	}

	
};
