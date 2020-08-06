#include<iostream>

using namespace std;
bool compare (int a, int b)
{
  cout<<"Comparing"<<a<<"and "<<b;
  return a>b;
}


void bubble_sort (int a[], int n,bool (&compare)(int a,int b))
{
for (int i = 1; i <=n-1; i++) {
  for (int j = 0; j <=(n-i)-1; j++) {
    /* code */
    if (compare(a[j],a[j+1])) {
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
bubble_sort(a,n,compare);

for (int k = 0; k <n; k++) {
  /* code */
std::cout <<a[k]<<",";
}




}
