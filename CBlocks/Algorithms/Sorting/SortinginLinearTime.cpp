#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

int low=0;
int mid = 0;
int high = n-1;
while(mid<=high)
{
	if(a[low]==0)
	{
		swap(a[low],a[mid]);
		low++;
		mid++;
	}
	else if(a[mid]==1)
	{
		mid++;
	}
	else

	swap(a[mid],a[high]);
		high--;
}

for(int l=0;l<n;l++)
{
	cout<<a[l]<<endl;
}

	return 0;
}
