#include <iostream>
#include <map>
#include <string>

std::string change_letters(std::string s) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        if (s[i] <= 64 || (s[i] > 90 && s[i] < 97) || s[i] > 122) {
            s[i] = ' ';
        }
    }
    return s;
}

std::map<std::string, int> counter(std::string s) {
    std::map<std::string, int> a;
    std::string str;

    for (int k = 0; k < s.size(); ++k) {
        if (s[k] != ' ' && s[k] != '\0') {
            str += s[k];
        }
        else {
            if (!str.empty()) {
                a[str]++;
                str.clear();
            }
        }
    }

    return a;
}

int main() {
    std::string s;
    std::getline(std::cin, s);  // Read the entire line including spaces

    s = change_letters(s);

    std::map<std::string, int> a = counter(s);

    for (const auto& pair : a)
        std::cout << pair.first << " " << pair.second << std::endl;

    return 0;
}
