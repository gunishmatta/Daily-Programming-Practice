#include<bits/stdc++.h>
using namespace std;
//Fibonacci Series using Bottom Up approach
int fibo(int n)
{
	int dp[100];
	dp[1]=1;
	dp[0]=0;
	for (int i = 2; i <=n ; i++)
	{
		dp[i]= dp[i-1]+dp[i-2];
	}

	return dp[n];

}


int main()
{
int n;
cin>>n;
cout<<fibo(n);
}