#include<iostream>
#include<vector>
using namespace std;
vector<int> findfactors(int n)
{
vector<int> result;
for (int i = 2; i*i<=n; i++) {
while (n%i==0) {
result.push_back(i);
n /=i;
}

}
if(n>1) //n is prime and last factor
{
result.push_back(n);
}
return result;
}

int main() {
int n;
cin>>n;
auto res =findfactors(n);
for(auto i:res)
{
  cout<<i<<endl;
}
  return 0;
}
