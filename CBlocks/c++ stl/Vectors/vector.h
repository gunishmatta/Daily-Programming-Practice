#include<iostream>
using namespace std;
class Vector
{
int currentSize;
int maxSize;
int *a;
public:
  Vector()
  {
    currentSize =0;
    maxSize =1;
    a = new int[maxSize];
  }

void push_back(const int element)
{
  if(currentSize==maxSize)
  {
  //in case array is full
  int *oldptr = a;
a = new int[2*maxSize]; //size doubling operation
maxSize = maxSize*2;
for (int i = 0; i < currentSize; i++) {

      a[i]= oldptr[i];
}
delete []oldptr; //clear the memory
  }
  a[currentSize]=element;
currentSize++;
}
  int pop_back()
  {
    return currentSize--;
  }
  int front() const
  {
    return a[0];
  }
  int back() const
  {
    return a[currentSize-1];
  }
  int size() const
  {
    return currentSize;
  }
  int capacity() const
  {
    return maxSize;
  }
  bool empty() const
  {
    return currentSize==0;
  }
  int at(const int i)
  {
    return a[i]; //return ith index
  }
  int operator[] (const int i)
  {
    return a[i];
  }
};
