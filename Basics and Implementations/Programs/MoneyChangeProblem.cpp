#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b)
{
  return a<=b;
}

int main() {
int money;
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
int n = sizeof(coins)/sizeof(int);
    std::cout << "Enter amount of money" << '\n';
cin>>money;
while(money>0)
{
int lb = lower_bound(coins,coins+n,money,compare)-coins-1;
int m = coins[lb];
std::cout <<m<< '\n';
money = money-m;
}
  return 0;
}
