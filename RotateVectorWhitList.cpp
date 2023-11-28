#include <iostream>
#include <list>
#include <vector>

std::vector<int> rotate(const std::vector<int>& v, int k) {
    std::list<int> l(v.begin(), v.end());

    int size = v.size();
    if (size == 0)
    {
        return v;
    }
    k = k % size;
    if (k < 0) {
        k += size;
    }

    if (k == 0) {
        return v;
    }

    for (int i = 0; i < k; i++) {
        l.push_front(l.back());
        l.pop_back();
    }
    std::vector<int> l2(l.begin(), l.end());
    return l2;

}

int main() {
    std::vector<int> mylist;
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    mylist.push_back(4);
    mylist.push_back(5);
    mylist = rotate(mylist, 3);

    std::cout << "Rotated List: ";
    for (const int& element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "Hello World!\n";

    return 0;
}
