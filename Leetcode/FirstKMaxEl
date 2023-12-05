#include <iostream>
#include <vector>
#include <queue>


std::priority_queue<int, std::vector<int>, std::greater<int>>  FirstKMaxEl(std::vector<int> vec, int k)
{
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq(vec.begin(), vec.end());

	for (int i = 0; i < vec.size() - k; ++i)
	{
		pq.pop(); 
	}
	return pq;
}

int main()
{
	std::vector<int> vec;
    int n, k;
	std::cin >> n >> k;
	int a;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a;
		vec.push_back(a);
	}

	std::priority_queue<int, std::vector<int>, std::greater<int>>  pq = FirstKMaxEl(vec, k);


	for (int i = 0; i < k; ++i)
	{
		std::cout << pq.top() << " ";
		pq.pop();
	}
    return 1;
}
