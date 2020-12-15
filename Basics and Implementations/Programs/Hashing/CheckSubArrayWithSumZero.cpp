#include<bits/stdc++.h>
using namespace std;


bool checkSubarraySum(int arr[],int n)
{
	unordered_set<int> sumSt;
	int sum =0;
for (int i = 0; i < n; i++)
{
sum +=arr[i];


if (sum==0 || sumSt.find(sum)!= sumSt.end())
{
return true;
}

sumSt.insert(sum);

}
return false;

}



int main()
{
int arr[] ={-2,0,2,1,5};
int n = sizeof(arr)/sizeof(int);
if(checkSubarraySum(arr,n))
{
	cout<<"It exists";
}
else
{
	cout<<"No";
}
}