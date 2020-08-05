#include<iostream>

using namespace std;

void bubble_sort (int a[], int n)
{
for (int i = 1; i <=n-1; i++) {
  for (int j = 0; j <=(n-i)-1; j++) {
    /* code */
    if (a[j]>a[j+1]) {
    swap(a[j],a[j+1]);
    }
  }
}

}
int main() {

int a[100] = {0};
int n,key;
std::cout << "Enter size of array" << '\n';
cin>>n;
  for (int k =0 ; k<n; k++) {
    cin>>a[k];
  }
bubble_sort(a,n);

for (int k = 0; k <n; k++) {
  /* code */
std::cout <<a[k]<<",";
}




}
