#include<iostream>
#include<algorithm>
using namespace std;

void recursive_bubbleSort(int a[],int j,int n)
{
if (n==1) {
  return;
}
if (j==n-1) {
recursive_bubbleSort(a,0,n-1);
}
if (a[j]>a[j+1]) {
swap(a[j],a[j+1]);
recursive_bubbleSort(a,j+1,n);
return;

}

}
int main() {
  int n;
cin>>n;
  int a[n];
for (int i = 0; i < n; i++) {
cin>>a[i];
}
recursive_bubbleSort(a,0,n);

for (int i = 0; i < n; i++) {
cout<<a[i]<<endl;
}
  return 0;
}
