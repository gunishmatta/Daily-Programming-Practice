#include<bits/stdc++.h>

using namespace std;

int main()

{

set<int> s;
s.insert(5);
s.insert(4);
s.insert(10);
int x;
cout<<"Enter value of number to be searched in set"<<endl;
cin>>x;
auto it3 = s.find(x);
if(it3==s.end())
cout<<x<<" is missing"<<endl;

auto a = s.lower_bound(x);
if(a==s.begin()&&a==s.end())
{
    cout<<"Set is empty";
}
else
if(a==s.begin())
{cout<<*a<<endl;
}
else if(a==s.end())
{
    a--;
    cout<<*a<<endl;

}
else{
auto b = a; b--;
if (x-*b < *a-x) cout << *b << "\n";
else cout << *a << "\n";
}

//set<int>::iterator it = s.begin();
auto it = s.begin(); //declaring iterator in a better way
cout<<*it<<endl; //prints the first element of set as it points to first element

for(auto it = s.begin(); it!=s.end();it++) //loop to print all elements of set using iterator
{
    cout<<*it<<endl;
}

auto its = s.end(); //since s.end() points after last element so we do a decrement of it to point to last element to print last element
its--;   
cout<<*its<<endl;

return 0;

}