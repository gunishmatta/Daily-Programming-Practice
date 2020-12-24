 //problem link https://www.geeksforgeeks.org/count-of-right-angled-triangle-formed-from-given-n-points-whose-base-or-perpendicular-are-parallel-to-x-or-y-axis/

#include <bits/stdc++.h>
using namespace std;

int findNumberofTriangles(int a[][2],int n)
{
unordered_map<int,int> xpoints;
unordered_map<int,int> ypoints;


for (int i = 0; i < n; i++)
{
xpoints[a[i][0]]++;
ypoints[a[i][0]]++; //store freq of points in hashmap
}
int count =0;

for (int i = 0; i < n; i++)
{
if(xpoints[a[i][0]]>=1 and ypoints[a[i][1]]>=1)
{
	count += (xpoints[a[i][0]]-1)+(ypoints[a[i][1]]-1);
}

}

return count;

}


int main()
{
	int arr[][2] ={{1,2},{2,1},{2,2},{2,3},{3,2}};
	int n = sizeof(arr)/sizeof(arr[0]);

cout<<findNumberofTriangles(arr,n);
	
	return 0;
}