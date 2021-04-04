#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
	bool ans = true;

	for (long long i = 2; i * i <= n;i++)
	{
		if(n%i==0)
		{
			ans = false;
		}
	}
	return ans;
}

void sieve(bool is_Prime[],int n)
{
	is_Prime[0] = is_Prime[1] = false;

	for (int i = 2; i <= n;i++)
		is_Prime[i] = true;

	for (int i = 2; i <= n;i++)
	{
		if(is_Prime[i])
		{
			for (int k = 2; k * i <= n;k++)
			{
				is_Prime[k * i] = false;
			}
		}
	}

	cout << is_Prime[n] << endl;
}

int main(int argc, char const *argv[])
{

	bool* is_Prime = new bool[1001];
	sieve(is_Prime, 6);

	cout << isPrime(6);

}