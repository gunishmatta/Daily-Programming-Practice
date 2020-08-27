#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void clear_lastn_bits(int &n,int i)
{
  int mask = (-1<<i+1);
   n =  n & mask;
}

void clear_itoj_bits(int &n,int i,int j)
{
  int first_mask = (~0)<<(j+1);
  int second_mask = (1<<i)-1; //or we can use 2^n -1
  int final_mask = first_mask|second_mask;
n = n&final_mask;
}
    int main() {

       int n;
       cin>>n;
int i;
int j;
cin>>i;
cin>>j;
//clear_lastn_bits(n,i);
clear_itoj_bits(n,i,j);
cout<<n<<endl;


}
