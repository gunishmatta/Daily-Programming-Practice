#include <iostream>
#include<vector>
using namespace std;
int main() {
vector<int> d{1,3,4,5,6};
d.push_back(16);  //Normal TC is O(1) can take more time with more elements


d.pop_back(); //Removes last element with O(1) TC.

d.insert(d.begin()+2,2,21); //inserts an element at a given index // 6 elements with value 21 TC is O(n) n is no of elements added or shifted

d.erase(d.begin()+5); // erase a specific element

d.erase(d.begin()+3,d.begin()+5); //delete from d.begin()++ 3 to 5
for(auto a:d)
{
    cout<<a<<endl;
}

cout<<d.front()<<endl; //returns front most element
cout<<d.back()<<endl; //returns last element

cout<<d.size()<<endl;

cout<<d.capacity()<<endl; //vector does not shrink after operations

d.resize(4); //size changes but capacity does not change even after resize

d.clear(); //deletes all the elements
if(d.empty())
{
    cout<<"d is an empty vector";
}
else
{
    cout<<" d is not empty";
}
}
