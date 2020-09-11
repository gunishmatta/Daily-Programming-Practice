#include<iostream>
using namespace std;

int lsearch(int *a,int i,int n,int key)
{

if (i==n) {
return -1;
}
if (a[i]==key) {
return i;
}

return lsearch(a,i+1,n,key);

}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }
  int key;
  cin>>key;
  std::cout <<lsearch(a,0,n,key)<< '\n';

  return 0;
}
