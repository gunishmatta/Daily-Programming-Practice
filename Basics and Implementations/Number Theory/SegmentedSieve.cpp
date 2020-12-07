#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define MAX 100000
vector<int> sieve()
{
  std::vector<int> primes;
  bool isPrime[MAX];
  for (int i = 2; i < MAX; i++) {
    isPrime[i]=true;
  }
  for (int j = 2;j*j<=MAX;j++) {
  if (isPrime[j]) {
  for (int k  = j*j;k<MAX;k=j+k) {
    isPrime[k]=false;
  }
  }
  }
  primes.push_back(2);
  for (int i = 2; i < MAX; i++) {
    if (isPrime[i]) {
    primes.push_back(i);
    }
  }

return primes;
}
int main() {

vector<int> prime = sieve();

int t;
cin>>t;
while(t--)
{
  int n;
cin>>n;
  int x=0;
while (x<=n) {
   {
      cout<<prime[x]<<endl;
    }
x++;
}


}



  return 0;
}
