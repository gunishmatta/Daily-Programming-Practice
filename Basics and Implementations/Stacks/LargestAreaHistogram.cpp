#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getMaxArea(int histogram[],int n)
{
  stack<int> s;
  int max_area = 0;
  int top;
  int area_with_top;
  int i=0;
  while (i<n) {
    if(s.empty()||histogram[s.top()]<=histogram[i])
    {
      s.push(i++);
    }
    else
    {
      top = s.top();
      s.pop();
      area_with_top = histogram[top]*(s.empty()?i:i-s.top()-1);
    }
    if(max_area<area_with_top)
    {
      max_area=area_with_top;
    }
  }
while (s.empty()==false) {
top = s.top();
s.pop();
area_with_top = histogram[top] * (s.empty() ? i :
                               i - s.top() - 1);

       if (max_area < area_with_top)
           max_area = area_with_top;
}
return max_area;

}
int main() {
  int histogram[]={6,2,5,4,5,1,6};
  int n = sizeof(histogram)/sizeof(int);
  cout<<"Max Area is "<<getMaxArea(histogram,n);
  return 0;
}
