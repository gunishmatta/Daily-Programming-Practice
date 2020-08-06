#include<iostream>

using namespace std;

int main() {

int a[100] = {0};
int n,key;
int currentSum=0;
int maxSum =0;
int left =0;// To store the position of the subarray with the largest Sum
int right = 0;
std::cout << "Enter size of array" << '\n';
cin>>n;
  for (int k =0 ; k<n; k++) {
    cin>>a[k];
  }

for (int i = 0; i <n; i++) {
  for (int j = i; j < n; j++) {
currentSum = 0;
    for (int k = i; k <=j ; k++) {
      currentSum += a[k];
    }
  //  std::cout << "Current sum "<<currentSum<< '\n';
if (currentSum>maxSum) {
  maxSum = currentSum;
  left = i;
  right = j;
}

  }

}
std::cout << "Maximum Sum "<<maxSum<< '\n';

for (int l = left; l <=right; l++) {
  std::cout <<a[l]<<',';
}

}
