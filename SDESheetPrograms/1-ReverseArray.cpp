#include<iostream>
using namespace std;
int main() {
int a[] ={1,2,4,5,6,7,8,9,10};
int n = sizeof(a)/sizeof(int);

int start =0;
int end = n-1;

while (start<end) {
int temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}

for(int i=0;i<n;i++)
{
  cout<<a[i]<<" ";
}
  return 0;
}
