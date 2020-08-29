#include<iostream>
using namespace std;
int getbit(int n,int i)
{
int mask = 1<<i;
  return((n&mask)>0?1:0);
}
int setbit(int n,int i)
{

int mask = (1<<i);
int ans =(n|mask);
return ans;
}

int clearBit(int n,int i)
{
//  cout<<"1<< i = "<<(1<<i);
  int mask = ~(1<<i);
n = n&mask;
  return n;
}
int getbit(int n,int i)
{
int mask = i<<1;
  return((n&mask)>0?1:0);
}
int main() {
  int n;
  cin>>n;
int i;
cin>>i;
//n =setbit(n,i);
std::cout <<clearBit(n,i)<< '\n';
//std::cout << "Answer is "<<n<< '\n';
  return 0;
}
