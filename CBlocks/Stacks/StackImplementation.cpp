#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
private:
  std::vector<int> v;
public:
  void push(int data)
  {
    v.push_back(data);
  }
  void pop()
  {
    v.pop_back();
  }
  bool isEmpty()
  {
    return v.size()==0;
  }
  int top()
  {
    return v[v.size()-1];
  }
};


int main() {
Stack s;
s.push(1);
s.push(2);
s.push(3);

while(!s.isEmpty())
{
  cout<<s.top()<<" ";
  s.pop();
}
  return 0;
}
