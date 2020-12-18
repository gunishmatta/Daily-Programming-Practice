#include <bits/stdc++.h>
using namespace std;

int findLargestSubSeq(int arr[],int n)
{
	unordered_map<int,int> m; //number, streak_length
	for (int i = 0; i < n; i++)
	{
		int no=arr[i];
		if(m.count(no-1)==0 and m.count(no+1)==0)
		{
			m[no]=1; //if a number is occuring for 1st time and its previous and next are not present
						//then we will create a new streak wrt no
		}

		else if(m.count(no-1) and m.count(no+1))
		{
			int len1 = m[no-1]; //if both previous and next are present then we will concat both streaks
			int len2 = m[no+1];

			int streak = len1+1+len2;
			m[no-len1] = streak;
			m[no+len2] = streak; //updating new start and end no's streak
		}

else if(m.count(no-1) and !m.count(no+1))
{
int len = m[no-1]; //right expansion case 
m[no-len] = len+1; //update length of streak
m[no]= len+1; //updating start and end point's streak
}

else
{
	int len = m[no+1]; //5 6 7 10 11 12 and you get 9
	m[no+len] = len+1;
	m[no] = len+1;

}	


	}

int largest =0;
for(auto p:m)
{
	largest = max(largest,p.second);
}
return largest;
}



int main()
{
	int arr[] ={14,5,1,2,6,3,7,8,9};
	int n = sizeof(arr)/sizeof(int);

	cout<<findLargestSubSeq(arr,n);

	return 0;
}