#include<iostream>
#include<climits>
using namespace std;
int main() {
int a[1000];
int n;
  std::cout << "Enter size of array" << '\n';
  cin>>n;
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }
  int lo = 0; //pointer for traversal from left side
  int hi = n-1; //pointer for traversal from right side
  int left_max =INT_MIN;
  int right_max=INT_MIN;
  int water=0; //final answer

while (lo<=hi) {
if (a[lo]<a[hi]) {
if (left_max<a[lo]) {
left_max = a[lo];
}
else
{water += left_max-a[lo];
}
lo++;
}
else
{
  if (a[hi]>right_max) {
  right_max = a[hi];
  }
  else
  {
    water += right_max-a[hi];
  }
hi--;
}

}
std::cout <<water<< '\n';
  return 0;
}
