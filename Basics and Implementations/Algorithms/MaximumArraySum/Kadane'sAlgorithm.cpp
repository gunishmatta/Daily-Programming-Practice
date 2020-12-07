#include<iostream>

using namespace std;

int main() {
  int a[100] = {0};
  int n,key;
int currentSum =0;
int maxSum =0;
  std::cout << "Enter size of array" << '\n';
  cin>>n;
    for (int k =0 ; k<n; k++) {
      cin>>a[k];
    }

for (int i = 0; i < n; i++) {
  currentSum += a[i];
  if(currentSum<0)
  {
    currentSum =0;
  }
if (currentSum>maxSum) {
  maxSum = currentSum;
}

}
std::cout << "Maximum Sum "<<maxSum << '\n';

  return 0;
}
