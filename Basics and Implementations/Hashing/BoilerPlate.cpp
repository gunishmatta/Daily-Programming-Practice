#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
	string key;
	T value;
	Node<T>* next;

	Node(string key,val)
	{
		this->key=key;
		value=val;
		next = NULL;
	}
	~Node()
	{
		if(next!=NULL)
		{
			delete next;
		}

	}
	
};

class HashTable
{
int table_size;
	int current_size;
	Node<T> **table;
	
public:

	HashTable(int ts=7)
	{
		table_size=ts;
		table = new Node<T>*[table_size]; 
		current_size =0;
		for (int i = 0; i < table_size; i++)
		{
			table[i]=NULL;
		}
	}
	
	void insert(string key,T value)
	{
		
	}

};



int main()
{
	
	return 0;
}