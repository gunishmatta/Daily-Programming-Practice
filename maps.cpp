#include<bits/stdc++.h>

using namespace std;
#define mp map<string,int>
int main()

{
mp m;
m["Gunish"] = 21;
m["Mayank"] =22;

cout<<m["Gunish"]<<endl;
cout<<m["Rachit"]<<endl;  //adds a key automatically with value 0
//The function count checks if a key exists in a map:

if(m.count("Gunish"))
{
    cout<<"key exists in map"<<endl;
}

for(auto i:m)
{
    cout<<i.first<<" "<<i.second<<endl;  //prints all keys and values in map
}
return 0;

}