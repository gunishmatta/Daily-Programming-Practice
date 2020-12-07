#include<iostream>
using namespace std;
int calc(int a,int n)
{
  if (n==0) {
    return 1;
  }
  int smallans= calc(a,n/2);
  smallans*=smallans;
  if (n&1) { // if n is odd then a^n = a*a^(n-1)
    return a*smallans;
  }
  else
  return smallans;
}
int main() {
  int a,n;
  cin>>a>>n;
  cout<<calc(a,n)<<endl;
  return 0;
}
