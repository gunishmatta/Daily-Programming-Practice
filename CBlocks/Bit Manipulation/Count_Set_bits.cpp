#include<iostream>
using namespace std;
int countbits(int n)
{
  int ans =0;
  while(n>0)
  {
    ans += n&1;
n = n>>1;
  }
  return ans;
}
//optimised method
int countbitsfaster(int n)
{
  int ans =0;
  while (n>0) {
n = n&(n-1);
ans++;
  }
return ans;
}
int main() {
  int n;
  cin>>n;
  cout<<countbitsfaster(n)<<endl;

  return 0;
}
