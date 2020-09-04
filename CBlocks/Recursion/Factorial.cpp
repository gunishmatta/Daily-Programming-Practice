#include<iostream>
using namespace std;
int fact(int n)
{

  if (n==0||n==1) {
  return 1;
  }
  else
  return n*fact(n-1);
}
int main() {
int n;
std::cout << "Enter Number " << '\n';
cin>>n;
std::cout <<fact(n)<< '\n';
  return 0;
}
