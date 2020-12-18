#include<bits/stdc++.h>
using namespace std;


int longestSubarray(int arr[],int n,int k)
{
unordered_map<int,int> mp;
int prefixSum =0;
int length =0;

for (int i = 0; i < n; i++)
{
prefixSum+= arr[i];
if (prefixSum==k)
{
length = max(length,i+1);
}

if(mp.find(prefixSum-k)!=mp.end())
{
	length = max(length,i-mp[prefixSum-k]);
}
else
{
	mp[prefixSum]=i; //storing the first occurance
}
}

return length;
}


int main()
{
int arr[] ={0,-1,1,2,5,-5,-2};

int n = sizeof(arr)/sizeof(int);
cout<<longestSubarray(arr,n,3);

}