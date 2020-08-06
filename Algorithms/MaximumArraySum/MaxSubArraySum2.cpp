// Maximum subarray sum using cumulative Sum
// cs[i] = cs[i-1]+a[0];
//Sum of array(i,j) = cs[j]-cs[i-1];

#include<iostream>

using namespace std;

int main() {

int a[100] = {0};
int n,key;
int csum[1000];
int currentSum=0,maxSum=0;
int left=0;
int right =0;
std::cout << "Enter size of array" << '\n';
cin>>n;
cin>>a[0];
 csum[0]=a[0];
  for (int k =1 ; k<n; k++) {
    cin>>a[k];
    csum[k] = csum[k-1]+a[k];
  }

for (int i = 0; i < n; i++) {
for (int j = i; j < n; j++) {
currentSum=0;
currentSum = csum[j]-csum[i-1];
if (currentSum>maxSum) {
maxSum= currentSum;
left =  i;
right = j;
}

}


}
std::cout << "Maximum sum "<<maxSum<<'\n';
for (int l = left; l <=right; l++) {
  std::cout<<a[l]<<',';

}

}
