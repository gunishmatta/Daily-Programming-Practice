#include <bits/stdc++.h>
using namespace std;

class Heap
{
vector<int> v;
int defaultSize;
bool minHeap;
bool compare(int a, int b)
{
	if(minHeap)
	{return a<b;
	}
	else
{
	return a>b;
}

}
void heapify(vector<int> &v,int index)
{
	int left = 2*index;
	int right = 2*index+1;

	int min_index = index;
	int last_index = v.size()-1;

	if(left<=last_index && compare(v[left],v[right]))
	{
		min_index = left;
	}

	if(right<=last_index && compare(v[right],v[min_index]))
{
	min_index = right;
}

if(min_index!=index)
{
	swap(v[min_index],v[index]);
	heapify(v,min_index);
}

}


public:
	Heap(int defaultSize=10,bool type = true)
	{
		v.reserve(defaultSize);
		v.push_back(-1); //block 0th index
		minHeap = type;
	}	

void push(int data)
{
	v.push_back(data);
	int index = v.size()-1;
int parent = index/2;
// keep pushing to top until root node or element>parent
while(index>1 and compare(v[index],v[parent]))
{
swap(v[index],v[parent]);
index = parent;
parent = parent/2;
}

}

int top()
{
	return v[1];
}

void pop()
{
	int last = v.size()-1;
	swap(v[1],v[last]);
	v.pop_back();
	heapify(v,1);
}

bool isEmpty()
{
	return v.size() ==1;
}

	
};

void buildHeap(std::vector<int> &v)
{
	int idx = (v.size()-1)/2;
	for(int i=idx;i>=1;i--)
	{
		heapify(v,i);
	}
}





int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	Heap h;

for (int i = 0; i < n; i++)
{
int no;
cin>>no;
h.push(no);
}


while(!h.isEmpty())
{
	cout<<h.top()<<" ";
	h.pop();
}

	return 0;
}