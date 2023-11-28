#include <iostream>
#include <vector>
#include <set>

 std::set<int> remove(std::vector<int> v)
{
	std::set<int> set1;
	int temp = 0;

	for (auto i = v.begin(); i != v.end(); ++i)
	{
		for (auto j = v.begin(); j != v.end(); ++j)
		{

			if (*i == *j)
			{
				++temp;
			}
		}
		if (temp == 1)
		{
			set1.insert(*i);

		}
		temp = 0;
	}

	
	return set1;
}

std::set<int> miavorum(std::set<int> set1, std::set<int> set2)
{
	int temp = 0;

	for (int num : set2)
	{
		for (int el : set1)
		{
			if (num == el)
			{
				temp++;
			}
		}
		if (temp == 0)
		{
			set1.insert(num);

		}
		temp = 0;
	}
	


	return set1;
}


int main()
{
	std::set<int> vec1;
	std::set<int> vec2;
	for (int i = 1; i <= 5; ++i)
	{
    	vec1.insert(i);
	}
	for (int i = 7; i <= 10; ++i)
	{
		vec2.insert(i);

	}
	
	
	for (int num : vec1)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;

	for (int num : vec2)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl ;

	std::set<int> my_set = miavorum(vec1, vec2);
	for (int num : my_set)
	{
		std::cout << num << " ";
	}
	return 0;
}
