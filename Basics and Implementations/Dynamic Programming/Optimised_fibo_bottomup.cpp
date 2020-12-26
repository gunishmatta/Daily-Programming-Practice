//space optimised bottom up dp based solution for finding fibonacci series 
#include <bits/stdc++.h>
int fibo(int n)
{
	if(n==0||n==1)
	{
		return n;
	}

int a=0;
int b =1;
int c;
for (int i = 2; i <= n; i++)
{
c=a+b;
a=b;
b=c;
}

return c;
}
using namespace std;
int main()
{

	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
	return 0;
}