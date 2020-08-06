#include<iostream>
#include<algorithm>

using namespace std;
int main() {
  /* code */
  int a[100] = {0};
  int n,key;
  std::cout << "Enter size of array" << '\n';
  cin>>n;
    for (int k =0 ; k<n; k++) {
      cin>>a[k];
    }
sort(a,a+n);
for (int i = 0; i <n; i++) {
  /* code */
  std::cout <<a[i]<< '\n';
}

  return 0;
}
