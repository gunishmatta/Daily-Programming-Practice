#include<iostream>
using namespace std;

void printoccurances(int *a,int i,int n,int key)
{
  if (i==n) {
    /* code */
return;
  }

if (a[i]==key) {
  /* code */
  cout<<i<<",";
}

printoccurances(a,i+1,n,key);

}
int main() {
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++) {
  cin>>a[i];
}
int key;
cin>>key;
printoccurances(a,0,n,key);
  return 0;
}
