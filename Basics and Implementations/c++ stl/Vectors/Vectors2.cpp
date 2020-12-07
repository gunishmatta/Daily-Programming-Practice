#include <iostream>
#include<vector>
using namespace std;
int main() {
vector<int> a;
vector<int> b(4,10);
vector<int> c(b.begin(),b.end());
vector<int> d{0,2,3,4,5};


//iterating over vector
for(int i=0;i<c.size();i++)
{
    cout<<c[i]<<endl;
}
for(auto it=d.begin();it!=d.end();it++)  //instead of auto we can use vector<int>::iterator
{
    cout<<*it<<endl;
}
for(auto a:d)
{
    cout<<a<<" ";
}

//taking input using vectors
vector<int> v;
int n;
cin>>n;
for(int j=0;j<n;j++)
{
    int no;
    cin>>no;
    v.push_back(no);
}

for(auto a:v)
{
    cout<<a<<endl;
}

//comparing vectors v and d on basis of memory and size
cout<<v.size()<<endl;
cout<<v.capacity()<<endl; // is 8 because memory doubling operation of vectors at run time
cout<<v.max_size()<<endl;

cout<<d.size()<<endl;
cout<<d.capacity()<<endl; // is 5 because memory is defined at time of initialising.
cout<<d.max_size()<<endl;

}
