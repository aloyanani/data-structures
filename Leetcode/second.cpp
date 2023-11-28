//242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
    {
        return false;
    }
       std::map<char, int> chars_map;
    for (int i = 0; i < t.size(); ++i)
    {
        chars_map[t[i]]++;
    }

    int el_length = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        for (auto& it : chars_map)
        {
            if (s[i] == it.first)
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

    if (el_length == s.size())
    {
        return true;
    }
    else
    {
        return false;
    }

    
}
};
