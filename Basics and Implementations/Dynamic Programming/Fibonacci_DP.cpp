#include<bits/stdc++.h>
using namespace std;

int fibo(int n,int dp[])
{
	if(n==0 or n==1)
	{
		return n;
	}

	if(dp[n]!=0)
	{
		return dp[n];
	}
int ans;

ans = fibo(n-1,dp)+fibo(n-2,dp);
dp[n]=ans;
return dp[n];

}


int main()
{
int n;
cin>>n;
int dp[100]={0};
cout<<fibo(n,dp)<<endl;
	
	return 0;
}