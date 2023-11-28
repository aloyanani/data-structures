#include <iostream> 
#include <vector> 
#include <string> 
#include <iterator> 

using std::string;
using std::vector;
using std::endl;

bool alphabetRot(vector<string>& v, vector<string>::iterator it)
{

    for (int k = 0; k < 26; ++k) {

        string str = *it;

        for (int i = 0; i < str.size(); ++i) {
            str[i] = str[i] + k;
            if (str[i] > 'z') {
                str[i] -= 26;
            }
        }

        for (auto itr = v.begin(); itr != v.end(); ++itr) {
            if (str == *itr && it != itr) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int N;

    std::cin >> N;

    vector<string> v(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> v[i];
    }

    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << alphabetRot(v, it) << endl;
    }
}
