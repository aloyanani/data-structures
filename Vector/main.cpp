#include <iostream>
#include "vector.h"


int main(){
Vector<int> vec(5,2);
std::cout<<"ani"<<std::endl;

vec.push_back(5);
vec.push_back(6);
vec.push_back(6);
vec.print();
vec.pop_back();
vec.print();
std::cout<<vec.front()<<"\n";

  for(Vector<int>::Iterator it = vec.begin(); it != vec.end(); it++ )
    {
      std::cout<< *it<<std::endl ;
    }

  std::cout<< vec[26] << std::endl;
  std::cout<< vec[1]<<std::endl;
 for(int i = 0; i < vec.get_size(); ++i)
   {
     std::cout<< vec[i]<<" " ;
   }
  std::cout<<std::endl;
  for(int element:vec){
  std::cout<<element<<" ";
}
  Vector <int>::Iterator an = vec.find(vec.begin(), vec.end(), 2 );
  std::cout<< *an << std::endl;
// Vector<int> vec_1(5);
//???? vec_1 = vec; 
// vec_1.print();
  //std::cout<<vec;
}
