#include<iostream>

using namespace std;

int main() {
  int a[100] = {0};
  int n,key;
  std::cout << "Enter size of array" << '\n';
  cin>>n;
    for (int k =0 ; k<n; k++) {
      cin>>a[k];
    }

for (int i=0;i<n ; i++) {
  for (int j = i; j <n ; j++) {
    /* code */
    for (int k = i;k <=j; k++) {
      /* code */
      std::cout <<a[k]<<",";
    }
    std::cout<< '\n';
  }
}



  return 0;
}
