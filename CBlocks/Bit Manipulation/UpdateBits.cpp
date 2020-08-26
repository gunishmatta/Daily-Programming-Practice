#include<iostream>
using namespace std;
int getbit(int n,int i)
{
int mask = i<<1;
  return((n&mask)>0?1:0);
}
int clearBit(int n,int i) //we can also do by call by reference void clearBit(int &n,int i) amd changes will be updated auto
{
//  cout<<"1<< i = "<<(1<<i);
  int mask = ~(1<<i);
n = n&mask;
  return n;
}
void updateBit(int &n,int i,int v)
{
  int mask=~(1<<i); //first we clear the bit to be updated and make it zero

  int cleared_n =n&mask;
    n= cleared_n|(v<<i); //now we do or operation with v<<i and cleared mask
}
int main() {
  int n;
  cin>>n;
int i;
cin>>i;
int v;
cin>>v;
updateBit(n,i,v);
cout<<n;
  return 0;
}
