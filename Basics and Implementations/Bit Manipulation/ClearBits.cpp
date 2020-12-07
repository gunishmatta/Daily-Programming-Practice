#include<iostream>
using namespace std;
int getbit(int n,int i)
{
int mask = 1<<i;
  return((n&mask)>0?1:0);
}

int clearBit(int n,int i) //we can also do by call by reference void clearBit(int &n,int i) amd changes will be updated auto
{
//  cout<<"1<< i = "<<(1<<i);
  int mask = ~(1<<i);
n = n&mask;
  return n;
}

int main() {
  int n;
  cin>>n;
int i;
cin>>i;
std::cout <<clearBit(n,i)<< '\n';
  return 0;
}
