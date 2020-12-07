#include<iostream>
using namespace std;

template<typename T>
T lsearch(T a[],int n,T key)
{
  for (int pos = 0; pos < n; pos++) {
if (a[pos]==key) {
  return pos;
}

  }
  return -1;
}
int main() {
int a[]= {1,2,3,4,5,6};
char ch[20]={'G','u','n','i','s','h','\0'};
int n = sizeof(a)/sizeof(int);
int key;
char chkey;
std::cout << "Enter key" << '\n';
  cin>>key;
  std::cout <<lsearch(a,n,key)<< '\n';
int nc= sizeof(ch)/sizeof(char);
std::cout << "Enter key" << '\n';
cin>>chkey;
std::cout <<lsearch(ch,nc,chkey)<< '\n';

  return 0;
}
