#include<iostream>
using namespace std;
int bsearch(int a[],int left,int right,int key)
{

if (right>=1) {
  /* code */
int mid = 1+(right-1)/2;
  if(a[mid]==key) {
    return mid;
  }

  if (a[mid]<key) {
  return bsearch(a,left,mid-1,key);
  }

  if (a[mid]>key) {
return bsearch(a,mid+1,right,key);
  }
}

  return -1;
}

int main() {
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++) {
  cin>>a[i];
}
int key;
cin>>key;
int left =0;
int right =n-1;
int result = bsearch(a,left,right,key);
if(result==-1)
{
  std::cout <<"Element is not present";
}
else
std::cout << "Element  present" << '\n';


  return 0;
}
