#include "vector.h"

template < typename Iterator>
void sort(Iterator first, Iterator last)
{  

    for (Iterator i = first ; i != last; ++i)
    {
        for ( Iterator j = first; j != last; ++j) 
        {
            if(i != j && *i < *j)
            {
                typename Iterator::ValueType temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}
