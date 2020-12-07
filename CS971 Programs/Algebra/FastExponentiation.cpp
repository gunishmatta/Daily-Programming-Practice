#include <iostream>
#include <math.h>
using namespace std;

long long reccalculate(long long a,long long n)
{

if(n==0) return 1;
if(n==1) return a;

long long t = pow(a,n/2);

return t*t*pow(a,n%2);

}

long long calculate(long long a,long long n)
{
	long long rem =1;
	while(n)
	{
		if(n%2==1) rem *=a;
		a*=a;
		n/=2;
	}
	return rem;
}

int main()
{
	long long n;
	long long a;
	cin>>a>>n;
cout<<calculate(a,n)<<endl;


	return 0;
}