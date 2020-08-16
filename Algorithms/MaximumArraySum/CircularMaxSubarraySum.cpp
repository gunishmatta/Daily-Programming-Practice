#include<iostream>
using namespace std;

int main() {
int n,sum=0,currentMin=0,minsoFar=0,currentMax=0,maxsoFar=0;
int a[10];
cin>>n;
for (int i = 0; i < n; i++) {
  cin>>a[i];
}
//Corner case
if (n==1) {
  cout<<a[0];
}

for (int j = 0; j < n; j++) {
  sum += a[j]; //sum of array
}
//we wil use Kadane's Algorithm. MaxSubaaray Sum = Total Sub Array sum - Minimum subarray sum
for (int i = 0; i < n; i++) {

currentMax = max(currentMax+a[i],a[i]);
maxsoFar = max(currentMax,maxsoFar);

currentMin = min(currentMin+a[i],a[i]);
minsoFar = min(currentMin,minsoFar);


}
if (minsoFar==sum) {
  cout<<maxsoFar;
}
 cout<<max(maxsoFar,sum-minsoFar)<<endl;


  return 0;
}
