#include <iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;
	cin>>n;

	long long sum=0;

	sum = pow(((n+1)*n),2)/4;
	cout<<sum<<endl;

	return 0;
}