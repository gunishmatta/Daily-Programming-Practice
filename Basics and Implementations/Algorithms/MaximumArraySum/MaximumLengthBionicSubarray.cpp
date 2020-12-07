#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bionic(int a[],int n)
{
int increasing[n];
int decreasing[n];
int max=0;

 //set index of first index in increasing array
increasing[0]=1;
 //set index of last element in decreasing array
decreasing[n-1]=1;

 for (int i = 1; i < n; i++) {
if(a[i]>=a[i+1])
{
increasing[i]=increasing[i-1]+1;
}
else
increasing[i]=1;
 }

 for (int j = n-2; j>=0; j--) {
if(a[j]>=a[j+1])
{
decreasing[j]=decreasing[j+1];
}
else
decreasing[j]=1;
}
 //finding length of maximum bionic array
max = (increasing[0]+decreasing[0])-1;
for (int i = 1; i < n; i++) {
  /* code */
  if ((increasing[i]+decreasing[i]-1)>max) {
    max = increasing[i]+decreasing[i]-1;
  }
}
  return max;
}


int main() {
  int t;
  cin>>t;
  for (int i = 0; i < t; i++)
  {
int n;
int a[n];
cin>>n;
for (int i = 0; i < n; i++) {
cin>>a[i];
}

std::cout <<bionic(a,n)<< '\n';

}
  return 0;
}
