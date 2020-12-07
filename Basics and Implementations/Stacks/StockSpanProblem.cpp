#include<iostream>
#include<stack>
using namespace std;
void findSpan(int span[],int prices[],int n)
{
  stack<int> s; //indexes of the days
  s.push(0);
  span[0]=1; //Span of day 1 will be 1
for (int i = 1; i <=n-1; i++) {
int currentPrice = prices[i];
while ((!s.empty())&&prices[s.top()]<=currentPrice) {
s.pop(); //pop out the elements which are less than coming element
}

if(!s.empty())
{
  int prev_highest = s.top();
  span[i] = i-prev_highest;
}
else
{
  span[i] = i+1;

}

s.push(i);
}


}

int main() {
  int prices[]={100,80,60,70,60,75,85};
  int n = sizeof(prices)/sizeof(int);
int span[1000] ={0};
  findSpan(span,prices,n);
  for(int i=0;i<n;i++)
  {
    cout<<span[i]<<" "<<endl;
  }
  return 0;
}
