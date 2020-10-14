#include<iostream>
#include<climits>
using namespace std;
int main() {
  int max = INT_MIN;
  int min = INT_MAX;
int a[] ={1,2,4,5,6,7,8,9,10};
int n = sizeof(a)/sizeof(int);

for(int i=0;i<n;i++)
{
  if(a[i]>max)
  {
    max = a[i];
  }
    if(a[i]<min)
  {
    min = a[i];
  }
}

cout<<"Max = "<<max;
cout<<"Min ="<<min;

  return 0;
}
