#include<iostream>

using namespace std;
void insertion_sort(int a[], int n)
{
  for (int i = 1; i <=n-1; i++) {
    int e = a[i];
    int j = i-1;
    while(j>=0&&a[j]>e)
    {
      a[j+1]=a[j];
      j = j-1;

    }
    a[j+1] = e;
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
insertion_sort(a,n);

for (int i = 0; i <n; i++) {
  std::cout <<a[i]<<","<< '\n';
}
}
