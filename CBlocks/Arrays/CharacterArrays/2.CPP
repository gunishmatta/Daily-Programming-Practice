#include<iostream>
using namespace std;
int main() {
	int a[9][9];
int M,N;
cin>>M>>N;

for(int row=0;row<M;row++)
{
for(int column=0;column<N;column++)
{
	cin>>a[row][column];
}

}

for(int column=0;column<N;column++)
{
	if(column%2==0)
	{
		for(int row=0;row<N;row++)
		{
			cout<<a[row][column]<<",";
		}

	}
	else
	for(int row=N-1;row>=0;row--)
	{
cout<<a[row][column]<<",";
	}
}


	return 0;

}
