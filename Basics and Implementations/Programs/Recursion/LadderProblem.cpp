#include<iostream>
using namespace std;

int numberofWays(int n,int k)
{
if (n==0) {
  /* code */
  return 1;
}
if (n<0) {
  /* code */
  return 0;
}

int ans =0;
for (int i = 0; i <=k; i++) {
ans += numberofWays(n-i,k);
}
return ans;

}
int main() {
  int n,k;  //n is the number of final step number of  k is max number of steps
  cin>>n>>k;
std::cout <<numberofWays(n,k)<< '\n';
  return 0;
}
