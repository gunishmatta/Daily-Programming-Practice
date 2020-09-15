#include<iostream>
using namespace std;

int merge(int *a,int start,int end)
{
int count =0;
int mid = (start+end)/2;
int i =start;
int j = end;
int k = start;
int temp[1000];
 while((i<=mid)&&(j<=end)) {
if (a[i]<a[j]) {
  temp[k++] = a[i++];

}
else
{
  temp[k++] = a[j++];
  count+= mid-i+1;
}


}
while (i<=mid) {
  temp[k++] = a[i++];

}
while (j<=end) {
  /* code */
  temp[k++] = a[j++];

}

for (int i = 0; i < end; i++) {
  /* code */
  a[i]=temp[k];
}

  return count;
}

int inversion_count(int *a,int start,int end)
{

if (start>=end) {
return 0;
}
int mid = (start+end)/2;
int x = inversion_count(a,start,mid);
int y = inversion_count(a,mid+1,end);
int z = merge(a,start,end);
cout<<x<<y<<z;
return x+y+z;

}

int main(int argc, char const *argv[]) {
int arr[] = {1,5,2,6,3,0};
int n = sizeof(arr)/sizeof(int);
std::cout <<inversion_count(arr,0,n)<< '\n';
  return 0;
}
