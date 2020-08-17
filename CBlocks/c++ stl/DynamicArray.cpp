//Example of dynamic array in cpp
// A dynamic array is an array whose size can be changed during the execution of
// the program. The most popular dynamic array in C++ is the vector structure,
// which can be used almost like an ordinary array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; x++)
#define pb(n) push_back(n)
typedef long long ll;
#define vin vector<int>
int main()
{ int n;

    vin v;
cout<<"enter Numbers"<<endl;
cin>>n;
loop(i,n)
{
cin>>n;

}
for (auto x : v) {
cout << x << "\n";
}

loop(i,v.size())
{
cout<<v[i]<<endl;
}

    return 0;
}
