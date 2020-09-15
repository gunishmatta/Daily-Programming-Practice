#include<iostream>
using namespace std;
int partition(int *a,int start,int end)
{
int i = start-1;
int j = start;
  int pivot = a[end];
  for (;j=end-1;) {
    if (a[j]<=pivot) {
      /* code */
      i = i+1;   //merge smaller element in region -1
      swap(a[i],a[j]);
    }
    j = j+1; //expand region 2

  }

  //place pivot in correct position
  swap(a[i+1],a[end]);
  return i+1;
}

void quicksort(int *a,int start,int end)
{
  if (start>=end) {
  return ;
  }
  int pivot = partition(a,start,end);
quicksort(a,start,pivot);
quicksort(a,pivot+1,end);

}

int main() {
  int arr[] = {2,7,8,6,1,5,4};
  int n = sizeof(arr)/sizeof(int);

quicksort(arr,0,n-1);

for (int i = 0; i < n; i++) {
std::cout <<arr[i]<< '\n';
}
  return 0;
}
