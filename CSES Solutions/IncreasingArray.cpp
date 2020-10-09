#include<iostream>
using namespace std;

int main() {
  long long n;
  cin>>n;
  long long a,b;
  long long sum =0;
  cin>>a;
for (int i = 1; i < n; i++) {
cin>>b;
if(b<a)
{
  sum+=(a-b);
}
else
a=b;
}
cout<<sum<<endl;
  return 0;
}
