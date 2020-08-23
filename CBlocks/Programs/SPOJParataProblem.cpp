#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; //number of test cases
  cin>>t;
  for (int l = 0; l < t; l++) {
int parathas; //number of parathas
cin>>parathas;
int n;
cin>>n; //number of chefs
int ranks[n];

for (int i = 0; i < n; i++) {
cin>>ranks[i];
}
int maxRank = *max_element(ranks,ranks+n);
//cout<<maxRank;
int upper_limit = (parathas*((2*maxRank)+(parathas-1)*maxRank))/2; //sum of terms in AP
std::cout <<upper_limit<< '\n';
int start = 0;
int end = upper_limit;
while (start<=end) {
int mid = (start+end)/2;
if (mid==upper_limit) {
std::cout <<mid<< '\n';
}
else if (mid>) {
  /* code */
}
}
  }

  return 0;
}
