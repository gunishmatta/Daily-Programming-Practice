#include<iostream>
using namespace std;


int gcd(int a,int b)
{
    return b ? gcd(b, a % b) : a;
}

int gcd_non_recursive(int a,int b)
{
    while(b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    cout << gcd(4, 6)<<endl;

    return 0;
}
