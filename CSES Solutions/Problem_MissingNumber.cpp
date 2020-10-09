#include<iostream>
using namespace std;
int findMissingNumber(int a[],int n)
{
  int x1=a[0];
  for (int i = 1; i < n-1; i++) {
  x1 = x1^a[i]; //for all numbers of array
  }
  int x2 =1;
  for (int i = 2; i <= n; i++) {
  x2 = x2^i; //for all numbers from 1 to n+1
  }

return (x1^x2); //xor of x1 and x2 is missing number
}
int main() {
int n;
cin>>n;
int a[n];
for (int i = 0; i < n-1; i++) {
cin>>a[i];
}
cout<<findMissingNumber(a,n);
  return 0;
}
