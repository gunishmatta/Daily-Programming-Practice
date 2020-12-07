#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Car{
public:
  string name;
int x,y;
Car()
{

}
Car(string n,int x,int y)
{
name = n;
this->x=x;
this->y=y;
}
int dist()
{
  return x*x+y*y;
}
};
bool compare(Car c1,Car c2)
{
if(c1.dist()==c2.dist())
{
  return c1.x<c2.x;
}
return c1.dist()<c2.dist();
}

int main() {
  vector<Car> v;
int n;
int x;
int y;
string name;
cin>>n;
for (int i = 0; i < n; i++) {
cin>>name>>x>>y;
Car temp(name,x,y)
v.push_back(temp);
}
sort(v.begin(),v.end(),compare);
for (auto a:v) {
  /* code */
cout<<a.name<<" "<<a.x<<" "<<a.y<<endl;
}
  return 0;
}
