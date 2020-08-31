#include<iostream>
using namespace std;
int main() {
	int Q;
	cin>>Q;
	while(Q>0)
	{
int a;
int b;
int sum =0;
cin>>a>>b;
while(a<=b)
{
sum += __builtin_popcount(a);
a++;
}
cout<<sum<<endl;

}

	return 0;
}
