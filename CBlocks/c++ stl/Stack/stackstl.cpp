#include<iostream>
#include<stack>
using namespace std;


int main() {
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.emplace(1);
  s.emplace(2);
  s.emplace(3);
s.emplace(4);
s.emplace(5); 

cout<<s.top()<<endl;
cout<<s.size()<<endl;

while(!s.empty())
{
  cout<<s.top()<<" ";
  s.pop();
}

  return 0;
}
