#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

// pair<int,int> p;
// p.first = 10;
// p.second = 20;
// std::cout <<p.first<< '\n';
// std::cout <<p.second<< '\n';
// pair<int,int> p2(p);
// std::cout <<p2.first<< '\n';
//
//
// pair <pair<int,int>,string> p3;
// p3.first.first = 1000;
// p3.first.second = 2000;
// p3.second = "Gunish Matta";
//
// std::cout <<p3.first.first<< '\n';
// std::cout <<p3.first.second<< '\n';
// std::cout <<p3.second<< '\n';
int a1[10];
int a2[10];
int n;
cin>>n;
for (int i = 0; i < n; i++) {
cin>>a1[i];
cin>>a2[i];
}

vector< pair <int,int> > v;
for (int i = 0; i < 5; i++) {
v.push_back(make_pair(a1[i],a2[i]));
}
std::cout<< '\n';
for (int j = 0; j < 5; j++) {
std::cout <<v[j].first<<" "<<v[j].second<< '\n';
}
  return 0;
}
