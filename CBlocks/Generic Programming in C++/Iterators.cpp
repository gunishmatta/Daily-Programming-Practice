#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//template<class T>
template<class ForwardIterator, class T>
ForwardIterator lsearch(ForwardIterator start ,ForwardIterator end,T key)
{
  while (start!=end) {
  if(*start ==key)
  {
    return start;
  }
  start++;
  }
  return end;
}



int main() {
  list<int> l;
  l.push_back(1);
  l.push_back(3);
    l.push_back(5);
      l.push_back(6);
      int key;
      std::cout << "Enter key" << '\n';
cin>>key;
auto it =lsearch(l.begin(),l.end(),key);
std::cout <<*it<< '\n';
  return 0;
}
