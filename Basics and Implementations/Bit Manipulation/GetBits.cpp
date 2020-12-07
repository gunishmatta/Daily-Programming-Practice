#include<iostream>
using namespace std;
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
cout<<getbit(n,i);
  return 0;
}
