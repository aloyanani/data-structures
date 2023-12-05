#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int FindMaxElIndexInVec(std::vector<std::pair<int, int>> v)
{
	int max_common = v[0].second;
	int max_index = 0;
	for (int i = 1; i < v.size(); ++i)
	{
		if (v[i].second > max_common)
		{
			max_common = v[i].second;
			max_index = i;
		}
	}
	return max_index;

}
void  FindMostCommonKEl(std::vector<int> vec, int k)
{
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq(vec.begin(), vec.end());
	std::vector<std::pair<int, int>> v;
	std::pair<int, int> p1;

	while(!pq.empty())
	{

		p1.second = 1;
		p1.first = pq.top();
		pq.pop();


		while (!pq.empty() && p1.first == pq.top())  // 1 2 3 2 1 2 -> /1 - 2/ 2 - 3/ 3 -1
		{
			p1.second++;
			pq.pop();
		}
		v.push_back(p1);
	}

	if (k > v.size())
	{
		k = k % v.size();
	}

	for (int j = 0; j < k; j++)
	{
		int y = FindMaxElIndexInVec(v);
		std::cout << v[y].first << " ";
		std::swap(v[y], v[v.size() - 1]);
		v.pop_back();
	}
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

	FindMostCommonKEl(vec, k);


	return 1;
}
