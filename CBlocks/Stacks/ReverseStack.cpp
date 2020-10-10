#include<iostream>
#include<stack>
void insertAtBottom(stack<int> &s,int x)
{
  //base case
  if(s.empty())
  {
    s.push(x);
    return;
  }
  int data = s.top();
  s.pop();
  insertAtBottom(s,x);
  s.push(data);
}
void reverse(stack<int> &s)
{if(s.empty())
  {
    return;
  }
  int data = s.top();
  s.pop();
  //recursively reverse smaller stack
  reverseStack(s);
  //insert item at bottom
  insertAtBottom(s,data);

}
using namespace std;
int main() {

  return 0;
}
