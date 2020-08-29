#include<iostream>
using namespace std;
int main() {
  int count[64] ={0}; //64 bit array for storing bits
  int n;
  int number;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>number;
    //update count array by extracting bits
    int j=0;
    while (number>0) {
    int last_bit = number&1;
count[j]+=last_bit;
j++;
number = number>>1; //move over to next bit
    }
  }
int p=1;
int ans =0;

for (int i = 0; i < 64; i++) {
count[i]%=3;
ans +=(count[i]*p);
p = p<<1;
}

std::cout <<ans<< '\n';
  return 0;
}
