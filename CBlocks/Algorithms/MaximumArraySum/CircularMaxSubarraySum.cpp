#include<iostream>
#include<climits>
using namespace std;
int kadane (int a[], int n)
{
  int maxnegative=INT_MIN;
  int currentSum =0;
  int maxSum =0;
  for (int i = 0; i < n; i++) {

    currentSum += a[i];

  if (currentSum<0) {
currentSum=0;
  }

maxSum = max(currentSum,maxSum);
  }
  return maxSum;
}
int main() {
		 int t;
     cin>>t;
     for (int i = 0; i < t; i++)
     {
int n,sum=0;
int a[n];
cin>>n;
for (int i = 0; i < n; i++) {
  cin>>a[i];
}

int maxSumFromKadane = kadane(a,n);
for (int j = 0; j < n; j++) {
  sum += a[j]; //sum of array
a[j] = -a[j];
}

// max sum with corner elements will be:
    // array-sum - (-max subarray sum of inverted array)
sum = sum + kadane(a,n);
cout<<max(sum,maxSumFromKadane);

}

  return 0;
}
