#include <iostream>
#include <list>

bool IsSorted(std::list<int> l)
{
    auto l_begin = l.begin();
    auto last = l_begin;
    ++l_begin;

    int numofbig = 0;
    int numofsmoll = 0;

    while (l_begin != l.end())
    {
        if (*last > *l_begin)
        {
            ++numofbig;
        }
        else
        {
            ++numofsmoll;
        }
        ++l_begin;
        ++last;

    }
    if (numofbig == l.size() - 1 || numofsmoll == l.size() - 1)
        return true;

    else
        return false;
}

int main()
{
    std::list<int> my_list1 = { 1, 2, 3, 4, 5 };                           //yes
  
    std::cout << "My list 1 is: ";

    for (int bit : my_list1)
    {
        std::cout << bit << " ";

    }
    bool sorted = IsSorted(my_list1);

    if (sorted)
    {
        std::cout << "My list 1 is sorted." << std::endl;
    }

    else
    {
        std::cout << "My list 1 is not sorted." << std::endl;
    }

    std::list<int> my_list2 = { 1, 2, 6, 4, 5 };                   //no

    std::cout << "My list 2 is: ";

    for (int bit : my_list2)
    {
        std::cout << bit << " ";

    }
     sorted = IsSorted(my_list2);


    if (sorted)
    {
        std::cout << "My list 2 is sorted." << std::endl;
    }

    else
    {
        std::cout << "My list 2 is not sorted." << std::endl;
    }


    std::list<int> my_list3 = { 5,4, 3, 2, 1};                   //yes

    std::cout << "My list 3 is: ";

    for (int bit : my_list3)
    {
        std::cout << bit << " ";

    }
    sorted = IsSorted(my_list3);


    if (sorted)
    {
        std::cout << "My list 3 is sorted." << std::endl;
    }

    else
    {
        std::cout << "My list 3 is not sorted." << std::endl;
    }

    return 0;
}
