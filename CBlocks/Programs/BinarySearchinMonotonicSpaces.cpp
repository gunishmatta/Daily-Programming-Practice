#include<iostream>
using namespace std;
int square_root(int n)
{
  int ans = -1;
  int start =0;
  int end= n-1;
  while (start<=end) {
int mid = (start+end)/2;
  if (mid*mid==n) {
return mid;

  }
  else if(mid*mid<n)
  {
    ans =mid;
    start=mid+1;
  }
  else
  start = mid+1;

  }
  return ans;
}

int main() {
int n;
cin>>n;
int a[n];

cout<<square_root(n);
  return 0;
}
