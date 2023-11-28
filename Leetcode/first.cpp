//1160. Find Words That Can Be Formed by Characters
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       
	std::map<char, int> chars_map;
	int sum = 0;
	for (int i = 0; i < chars.size(); ++i)
	{
		chars_map[chars[i]]++;
	}

	for (std::string el : words)
	{
		std::map<char, int> copy_chars_map = chars_map;
		int el_length = 0;
		for (int i = 0; i < el.size(); ++i)
		{
			for (auto &it : copy_chars_map)
			{
				if (el[i] == it.first)
				{
					

					if (it.second != 0)
					{
						el_length++;
						--it.second;
					}
					else
					{
						el_length = 0;
						break;
					}
				}
				

			}
		}

		if (el_length == el.size())
		{
			sum += el_length;


		}

	}

	return sum;
}
};
