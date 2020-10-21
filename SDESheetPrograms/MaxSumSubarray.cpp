#include <iostream>
using namespace std;
int maxSubarraySum(int a[],int n)
{
    int sum =0;
    int max_sum =0;
    int sub_arr;
    int end_index =0;
    for(int i=0;i<n;i++)
    {
        sum = sum+a[i];
        if(max_sum<sum)
        {
            max_sum = sum;
            end_index =i;
        }
        if(sum<0)
        {
            sum =0;
        }
    }
return end_index;
}
int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
int endIndex = maxSubarraySum(a,n);
for(int i=0;i<=endIndex;i++)
{
  cout<<a[i]<<" ";
}
}
}
