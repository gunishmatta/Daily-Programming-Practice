#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t ;
  cin>>t;
  for (int k = 0; k < t; k++) {
int n;
cin>>n;
int a[n];
for (int j = 0; j < n; j++) {
cin>>a[j];
}

next_permutation(a,a+n);

for(int i =0;i<n;i++)
{
  std::cout <<a[i]<< '\n';
}

  }
  return 0;
}
