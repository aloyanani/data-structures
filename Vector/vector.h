#include <iostream>


template <typename Vector>
class VectorIterator 
{
 public:
 using ValueType = typename Vector::ValueType;
 using PointerType = ValueType *;
 using ReferenceType = ValueType &;
private:
 PointerType ptr;
public:
VectorIterator(PointerType _ptr): ptr(_ptr){}
VectorIterator& operator++()
{
  ptr +=1;
  return *this;
}
VectorIterator operator++(int a)
{
  VectorIterator temp = *this;
  ++(*this);
  return temp;
  
}
VectorIterator& operator--()
{
  ptr -=1;
  return *this;
}
VectorIterator operator--(int a)
{
  VectorIterator temp = *this;
  --(*this);
  return temp;
  
}
ReferenceType operator[](int i)
{
  return *(ptr +i);
}

ReferenceType operator* ()
{
  return *ptr;
}

PointerType operator-> ()
{
  return ptr;
}
bool operator== (const VectorIterator& x)const
{
  return ptr == x.ptr;
}
bool operator!= (const VectorIterator& x)const
{
  return ptr != x.ptr;
}
};

template <typename T>
class Vector
{
private:

int size;
int capacity;
T*arr;
public:
  using ValueType = T;
  using Iterator =  VectorIterator<Vector<T>> ;
public:
  Vector();
  Vector(int _size);
  Vector(int _size, T el);
  ~Vector();
  T at( int index);
  T get_size();
  T get_capacity();
  void push_back(T el);
  void pop_back();
  T front();
  T back();
  void sort() ;
  void insert(int index, T el); 
  bool empty();
  void print();
  Iterator begin()
{
  return VectorIterator<Vector> (arr);
}
  Iterator end()
  {
    return VectorIterator <Vector>(arr + size);
  }
Vector (const Vector& _vec){
   if(capacity == size){
     capacity = size * 2;
   }
  size = _vec.size;
  capacity = _vec.capacity;
  for(int i = 0; i < _vec.size; ++i)
    {
      arr[i] = _vec.arr[i];
    }
  
}

T operator[] (int ind)
{
  if(ind < 0 || ind >= size )
  {
    std::cout<<"Out of range" << std::endl ;
    return 0;
  }
  
  return arr[ind];
}
Iterator find( Iterator begin , Iterator end,T element)
{

  while(begin != end){
    if(element == *begin){
      return begin;
    }
    ++begin;
  }
  return end;
}

//friend const std::ostream& operator<<(std::ostream& out, const Vector<T>& v);
};

template<typename T>
Vector<T>::Vector(){
size = 0;
capacity =1;
arr = new T[capacity];
}
template<typename T>
Vector<T>::Vector( int _size){
  size = _size;
capacity = size * 2;
arr = new T[capacity];
  for(int i = 0; i < size; ++i)
    {
      arr[i] = 0;
    }
}
template<typename T>
Vector<T>::Vector( int _size, T el){
  size = _size;
capacity = size * 2;
arr = new T[capacity];
  for(int i = 0; i < size; ++i)
    {
      arr[i] = el;
    }
}
template <class T>
Vector<T>::~Vector(){
  delete[] arr;
}
template<typename T>
 T Vector<T>::at ( int index){
   return arr[index];
 }
template<typename T>
 T Vector<T>::get_size ( ){
   return size;
 }
template<typename T>
 T Vector<T>::get_capacity ( ){
   return capacity;
 }
template<typename T>
 void Vector<T>::push_back (T el ){
   if(capacity == size){
     capacity = size * 2;
     T* new_arr = new T[capacity];
   
  
     for(int i = 0; i < size ; ++size){
        new_arr[i] = arr[i];
     }
      delete [] arr;
     arr = new_arr;
   }
  arr[size] = el;
  size++;
  
  }
   
template<typename T>
void Vector<T>::pop_back( ){
--size;
}
template<typename T>
 T Vector<T>::front(){
   return arr[0];
 }
template<typename T>
 T Vector<T>::back(){
   return arr[size -1];
 }
template<typename T>
void Vector<T>::sort()
{
    T temp;
   for(int i = 0; i < size -1 ; i++)
   {
       for(int j = 1; j <size - i-1;++j )
       {
           if(arr[j] > arr[j + 1])
           {
               temp = arr[j];
               arr[j]= arr[j+1];
               arr[j +1] = temp;
           }
       }
   }
   for(int i = 0; i < size ; i++)
   {
       std::cout<<arr[i]<<" ";
}
}
template<typename T>
void Vector<T>::insert(int index, T el)
{
   if(capacity == size){
     capacity = size * 2;
   }
   T* new_arr = new T[size + 1];
  size +=1;
  for(int i = 0; i < size ; ++size){
    T temp = arr[i];
    if(i == index)
    {
      new_arr[i] == el;
      ++i;
      
    }
    new_arr[i] = temp;
  }
   delete [] arr;
   for(int i = 0; i < size ; i++)
   {
       std::cout<<new_arr[i]<<" ";
}

}
template<typename T>
bool Vector<T>::empty()
{
  return (size == 0) ? true : false ;
}
template<typename T>
void  Vector<T>::print()
{
  for(int i = 0; i < size ; i++)
   {
       std::cout<<arr[i]<<" ";
   }
  std::cout<<"\n";
  
}
// ????
// template<typename T>
// const std::ostream& operator<<(std::ostream& out, const Vector<T>& v){
//   for(int i = 0; i < v.get_size(); ++i){
//     out<<v.at(i)<<" ";
//   }
  
// };
