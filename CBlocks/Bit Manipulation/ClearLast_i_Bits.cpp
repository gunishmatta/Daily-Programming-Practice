#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void clear_lastn_bits(int &n,int i)
{
  int mask = (-1<<i);
   n =  n & mask;
}


    int main() {

       int n;
       cin>>n;
int i;
cin>>i;
clear_lastn_bits(n,i);
cout<<n<<endl;

}
