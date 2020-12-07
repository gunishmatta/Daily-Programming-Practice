#include<iostream>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int> maxHeap;
	priority_queue<int,std::vector<int>,greater<int>> minHeap;
	
	int d;
	cin>>d;


	float median = d;
	cout<<"Median is "<<median<<endl;


	while(d!=-1)
	{
		if(maxHeap.size()>minHeap.size())
		{
			if(d<=median)
			{
				minHeap.push(maxHeap.top());
				maxHeap.pop();
				maxHeap.push(d);
			}
		else
		{
			maxHeap.push(d);
		}
		median = (maxHeap.top()+minHeap.top())/2.0;
		}
else if(minHeap.size()==maxHeap.size())
{
	if(d<median)
	{
		maxHeap.push(d);
		median = maxHeap.top();
	}
else
{
	minHeap.push(d);
	median = minHeap.top();
}
}
else
{

if(d>median)
{
	maxHeap.push(minHeap.top());
	minHeap.pop();
	maxHeap.push(d);
}
else
{
	maxHeap.push(d);
}

median = (maxHeap.top()+minHeap.top())/2.0;


}


		cout<<" Median is "<<median<<endl;
		cin>>d;

	}



	
	return 0;
}