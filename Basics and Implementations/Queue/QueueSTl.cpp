#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printQ(queue<int> q1)
{

  while (!q1.empty()) {
  cout<<q1.front()<<"  ";
  q1.pop();
  }
cout<<endl;
}
int main() {
queue<int> q1;
queue<int> q2;

q1.push(7);
q2.push(2);

q1.push(1);
q2.push(8);

q1.push(5);
q2.push(2);

printQ(q1);

printQ(q2);
q1.swap(q2);

printQ(q1);
printQ(q2);

  return 0;
}
