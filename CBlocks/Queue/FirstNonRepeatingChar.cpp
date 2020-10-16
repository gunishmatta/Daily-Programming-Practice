#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int freq[26] = {0};
queue<char> q;
char ch;
cin>>ch;
while (ch!='.') {
q.push(ch);
freq[ch-'a']++;
//query
while (!q.empty()) {
if(freq[q.front()-'a']>1)
{q.pop();
}
else
{
  cout<<q.front()<<endl;
  break;
}
}
//q is empty
if(q.empty())
{
  cout<<"-1"<<endl;
}
cin>>ch;
}

  return 0;
}
