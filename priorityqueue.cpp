#include<bits/stdc++.h>

using namespace std;

int main()

{
priority_queue<int> q;
q.push(-1);
q.push(100);
q.push(30);
q.push(20);
q.push(-100);
q.push(0);

cout<<"Top of PQ is "<<q.top()<<endl; //Greatest element since it arranges in descending order
cout<<"size of PQ is "<<q.size()<<endl;

q.pop();
cout<<"Top of PQ after pop is "<<q.top()<<endl; //2nd largest element
cout<<"size of PQ after pop is "<<q.size()<<endl;

priority_queue<int,vector<int>,greater<int>> q1;
q1.push(-1);
q1.push(100);
q1.push(30);
q1.push(20);
q1.push(-100);
q1.push(0);
cout<<"Top of PQ q1 is "<<q1.top()<<endl; //Smallest number as we have declared PQ q1 using other way
cout<<"size of PQ q1 is "<<q1.size()<<endl;




return 0;

}