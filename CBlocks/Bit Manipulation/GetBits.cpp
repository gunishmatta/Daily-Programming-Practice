#include<iostream>
using namespace std;
int getbit(int n,int i)
{

  return((n&(i>>1))?1:0);
}
int main() {
  int n;
  cin>>n;
int i;
cin>>i;
cout<<getbit(n,i);
  return 0;
}
