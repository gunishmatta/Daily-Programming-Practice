#include<bits/stdc++.h>
using namespace std;

int minSteps(int n,int dp[])
{
	if(n==1)
	{
return 0;
	}
int op1,op2,op3;
op1=op2=op3=INT_MAX;

if(dp[n]!=0)
{
	return dp[n];
}

if(n%3==0)
{
	op1= minSteps(n/3,dp);
}

if(n%2==0)
{
	op2=minSteps(n/2,dp);
}
op3 = minSteps(n-1,dp);

int ans = min(min(op1,op2),op3)+1;
dp[n]= ans;
return dp[n];

}

int main()
{
	int n;
	cin>>n;
	int dp[100]={0};
	cout<<minSteps(n,dp);
	return 0;
}