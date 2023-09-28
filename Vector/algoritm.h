#include "vector.h"

template < typename Iterator>
void sort(Iterator first, Iterator last)
{

    for (Iterator i = first; i != last; ++i)
    {
        for (Iterator j = first; j != last; ++j)
        {
            if (i != j && *i < *j)
            {
                typename Iterator::ValueType temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

template < typename Iterator>
int count(Iterator first, Iterator last,  typename Iterator::ValueType el )
{
  int el_count = 0;
  for (Iterator i = first; i != last; ++i)
  {
     if(*i == el)
     {
       ++el_count;
     }
  }
  return el_count;
}

template < typename Iterator>
typename Iterator::ValueType max_element(Iterator first, Iterator last)
{
  typename Iterator::ValueType max_el = *first;
  for (Iterator i = first; i != last; ++i)
  {
     if(*i > max_el)
     {
       max_el = *i;
     }
  }
  return  max_el;
}

template < typename Iterator>
typename Iterator::ValueType min_element(Iterator first, Iterator last)
{
  typename Iterator::ValueType min_el = *first;
  for (Iterator i = first; i != last; ++i)
  {
     if(*i < min_el)
     {
       min_el = *i;
     }
  }
  return min_el;
}

template < typename Iterator>
void reverse(Iterator first, Iterator last)
{

    for (Iterator i = first; i != --last; ++i)
    { 
            typename Iterator::ValueType temp = *i;
            *i = *last;
            *last = temp;
        
    }
}
