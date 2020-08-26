#include<iostream>
using namespace std;
<template T>
class Vector
{
T currentSize;
T maxSize;
T *a;
public:
  Vector()
  {
    currentSize =0;
    maxSize =1;
    a = new T[maxSize];
  }

void push_back(const T element)
{
  if(currentSize==maxSize)
  {
  //in case array is full
  T *oldptr = a;
a = new T[2*maxSize]; //size doubling operation
maxSize = maxSize*2;
for (T i = 0; i < currentSize; i++) {

      a[i]= oldptr[i];
}
delete []oldptr; //clear the memory
  }
  a[currentSize]=element;
currentSize++;
}
  T pop_back()
  {
    return currentSize--;
  }
  T front() const
  {
    return a[0];
  }
  T back() const
  {
    return a[currentSize-1];
  }
  T size() const
  {
    return currentSize;
  }
  T capacity() const
  {
    return maxSize;
  }
  bool empty() const
  {
    return currentSize==0;
  }
  T at(const T i)
  {
    return a[i]; //return ith index
  }
  T operator[] (const T i)
  {
    return a[i];
  }
};
