#include <iostream>
#include <vector>
#include <set>

std::set<int> remove(std::vector<int> v)
{
	std::set<int> set1(v.begin(), v.end());

	return set1;
}


int main()
{
	std::vector<int> vec;
	for (int i = 1; i < 5; ++i)
	{
		vec.push_back(i);
		vec.push_back(i);
		vec.push_back(i);
	}
	for (int num : vec)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;

	std::set<int> my_set = remove(vec);
	for (int num : my_set)
	{
		std::cout << num << " ";
	}
	return 0;
}
