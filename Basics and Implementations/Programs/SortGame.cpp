#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool print_list(pair<string,int> p1,pair<string,int> p2)
{int min =0;
  if(p1.second==p2.second)
  {
    min = p1.second;

    return (p1.first>p1.second)&&(p1.second>p2.second);

  }
  else
return p1.second>p2.second;
}

int main() {
	int n;
	cin>>n;

  string name;
  int salary;
	pair<string,int> employee[n];
	  for(int i=0;i<n;i++) {
      cin.get();
        getline(cin,name);
        cin>>salary;
        employee[i] = make_pair(name, salary);
        }

cout<<"Before sort"<<endl;
for (int j = 0; j < n; j++) {
cout<<employee[j].first<<" "<<employee[j].second<<endl;
}
sort(employee,employee+n,print_list);

cout<<"After sort"<<endl;
for (int j = 0; j < n; j++) {
cout<<employee[j].first<<" "<<employee[j].second<<endl;
}
	return 0;
}
