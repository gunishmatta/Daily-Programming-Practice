#include<bits/stdc++.h>

using namespace std;

int main()

{
queue<int> s;
s.push(2); //Front item
s.push(-1);
s.push(3);
s.push(101);
s.push(-101); //back

cout<<s.size()<<endl;
cout<<"Front of Queue is "<<s.front()<<endl;
cout<<"Back of Queue is "<<s.back()<<endl;

s.pop(); // Pop out from front
cout<<s.size()<<endl;
cout<<"Front of Queue is "<<s.front()<<endl;
cout<<"Back of Queue is "<<s.back()<<endl;

return 0;

}