#include<iostream>
using namespace std;
bool isSorted(int a[],int n)
{
  if (n==1 or n==0) {
  return true;
  }
  if ((a[0]<a[1])&&(isSorted(a+1,n-1))) {
  return true;
  }
  return false;
}
int main() {
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++) {
cin>>a[i];
  }
  if (isSorted(a,n)) {
  std::cout << "Yes it is sorted array" << '\n';
  }
  else
  std::cout << "No it is not sorted " << '\n';
  return 0;
}
