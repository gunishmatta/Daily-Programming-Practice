#include<iostream>
using namespace std;

int lastoccurs(int a[],int n,int key)
{
if (n==0){
return -1; //base case
}
int i = lastoccurs(a+1,n-1,key);
if (i==-1) {

if (a[0]==key) {
return key;
}
else
{
return -1;
}
}

return i+1;

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
std::cout <<lastoccurs(a,n,key)<< '\n';
  return 0;
}
