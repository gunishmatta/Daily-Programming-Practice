#include<iostream>
using namespace std;
int rotatedarray_search(int a[],int n,int key)
{
  int start = 0;
  int end = n-1;
  while (start<=end) {
  int mid = (start+end)/2;
  if(a[mid]==key)
  {
    return mid;
  }
  if (a[start]<=a[mid]) {
  if (key>=a[start]&&key<=a[mid]) {
  end =mid -1;
  }
  else
  start = mid+1;
  }
  else if(a[end]>=a[mid])
{
  if (key>=a[mid]&&key<=a[end]) {
  start = mid+1;
  }
  else
  end = mid-1;
}

  }
return -1;
}

int main() {
  int a[]={3,4,5,1,2};
  int key;
int n = sizeof(a)/sizeof(int);
  std::cout << "Enter element to be searched for " << '\n';
cin>>key;
std::cout <<"Element is present at "<<rotatedarray_search(a,n,key)<<"th position"<< '\n';
  return 0;
}
