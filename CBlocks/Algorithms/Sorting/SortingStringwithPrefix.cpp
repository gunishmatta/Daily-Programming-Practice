#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(string a, string b)
{
if(string(a).find(b)==0||string(b).find(a)==0)
	{
	return a.length()>b.length();
}
	else
return a<b;
}
int main() {
	int n;
	cin>>n;
	cin.get();
	string s[n];
	for(int l=0;l<n;l++)
	{
		getline(cin,s[l]);
	}

sort(s,s+n,compare);
for(int i=0;i<n;i++)
{
	cout<<s[i]<<endl;
}
	return 0;
}
