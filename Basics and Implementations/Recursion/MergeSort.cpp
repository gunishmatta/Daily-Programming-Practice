#include<iostream>
using namespace std;
void merge(int *a,int start,int end)
{
  int mid = (start+end)/2;
  int i = start;
  int j = mid+1;
  int k = start;
int temp[100];
while ((i<=mid)&&(j<=end)) {
  /* code */
  if (a[i]<a[j]) {
  temp[k++]=a[i++];
  }
  else
  {
    temp[k++]= a[j++];
  }
}
while (i<=mid) {
temp[k++] = a[i++];
}
while (j<=end) {
temp[k++]=a[j++];
}

for (int i = 0; i < end; i++) {
temp[i]=a[i];
}

}
void mergesort(int a[],int start,int end )
{
  if (start >=end) {
    /* code */
    return;
  }
  int mid = (start+end)/2;

mergesort(a,start,mid);
mergesort(a,mid+1,end);

//merge both arrays
  merge(a,start,end);
}
int main() {
  int n;
cin>>n;
  int a[n];
for (int i = 0; i < n; i++) {
cin>>a[i];
}
mergesort(a,0,n);

for (int i = 0; i < n; i++) {
cout<<a[i]<<endl;
}

  return 0;
}
