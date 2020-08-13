#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int n;
int a[10];
int right,left,target;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
cin>>target;
sort(a,a+n);

for(int i =0;i<n-2;i++)
{
int left = i+1;
 int right = n-1;

while(left<=right)
{
	if(a[left]+a[right]+a[i]==target)
	{
cout<<a[i]<<","<<a[left]<<"and"<<a[right]<<endl;
left++;
right--;
}
else
if(a[i]+a[left]+a[right]<target)
{
	left++;
}
else
right--;
}


}

	return 0;

}
