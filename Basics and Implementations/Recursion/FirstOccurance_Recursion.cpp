#include<iostream>
using namespace std;

int firstoccurs(int a[],int n,int key)
{
if (n==0){
return -1; //base case
}

if (a[0]==key) {
return 0; //Element present at 0th index
}

int i = firstoccurs(a+1,n-1,key);

if(i==-1)
{
  return -1; //Element not present in subaaray
}

return i+1; //index of item

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
std::cout <<firstoccurs(a,n,key)<< '\n';
  return 0;
}
