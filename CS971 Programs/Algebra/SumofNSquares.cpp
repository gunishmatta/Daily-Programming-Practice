#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;
	cin>>n;

	long long sum=0;

	sum = (n*(n+1)*((2*n)+1))/6;
	cout<<sum<<endl;

	return 0;
}