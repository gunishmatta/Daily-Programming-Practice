#include<iostream>
using namespace std;
int product(int a,int b)
{
  if(b==0)
{
  return 0;
}

  if (b==1)
{
    return a;
}
  return a+product(a,b-1);
}
int main() {
  int a,b;
  cin>>a>>b;
  std::cout <<product(a,b)<< '\n';
  return 0;
}
