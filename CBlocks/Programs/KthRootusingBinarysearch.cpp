#include<iostream>
#include<math.h>
using namespace std;
long checkroot(long n, int k)
{
  int ans =-1;
  long start =0;
  long end = n;
while (start<=end) {
long mid = (start+end)/2;
if (pow(mid,k)==n) {
  return mid;
}
else
if(pow(mid,k)<n)
{
  ans = mid;
  start = mid + 1;
}
else
{
  end = mid-1;
}
}
return ans;

}

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
long n;
cin>>n;
int k;
cin>>k;
cout<<checkroot(n,k);
}



	return 0;
}
