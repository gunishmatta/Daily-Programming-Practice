#include<iostream>

using namespace std;
int selection_sort(int a[],int n)
{
for (int i = 0; i < n-1; i++) {
for (int j = i; j<=n-1; j++) {
int min_index = i;
if (a[j]<a[min_index]) {
  min_index = j;
}
swap(a[i],a[min_index]);

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

selection_sort(a,n);
for (int i  = 0;  i< n; i++) {
  std::cout << a[i]<<",";
}



}
