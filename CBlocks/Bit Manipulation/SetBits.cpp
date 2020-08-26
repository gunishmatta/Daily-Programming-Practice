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
int main() {
  int n;
  cin>>n;
int i;
cin>>i;
n =setbit(n,i);
std::cout << "Answer is "<<n<< '\n';
  return 0;
}
