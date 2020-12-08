#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
	string key;
	T value;
	Node<T>* next;

	Node(string key,T val){
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
template <typename T>
class HashTable
{
int table_size;
	int current_size;
	Node<T> **table;
	
int hashFn(string key)
{
	int index=0;
	int power=1;
	for (int i = 0; i < key.length()-1; i++)
	{
		index = index+(key[i]*power)%table_size;
		index = index%table_size;
		power = (power*27)%table_size;

	}
	return index;
}

void rehash()
{
	Node<T>** oldTable = table;
	int oldTableSize = table_size;
	table_size = 2*table_size; //I am using approximate right now but we can also define a function to find next prime number after 2*table size
	table = new Node<T>*[table_size];
	for (int i = 0; i < table_size; i++)
	{
		table[i]=NULL;
	}
current_size=0;

for (int i = 0; i < oldTableSize; i++)
{
Node<T>*temp= oldTable[i];
while(temp!=NULL)
{
	insert(temp->key,temp->value);
	temp= temp->next;

}

if(oldTable[i]!=NULL)

{
	delete oldTable[i];
}

}

delete [] oldTable;


}

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
		int index = hashFn(key);
		Node<T> *n = new Node<T>(key,value);
		//insert at head of table index
		n->next = table[index];
		table[index]= n;
		current_size++;
	
		float load_factor = current_size/(1.0*table_size);

		if(load_factor>0.7)
		{
			rehash();
		}


	}
	void printTable()
	{
		for (int i = 0; i < table_size; i++)
		{
			cout<<"Bucket "<<i<<" -> ";
			Node<T>* temp = table[i];
			while(temp !=NULL)
			{
				cout<<temp->key<<" ";
				temp = temp->next;

			}
			cout<<endl;
		}

	}

};



int main()
{
HashTable<int> pm;
	pm.insert("Burger",100); 
		pm.insert("Pizza",120);
				pm.insert("Momos",120);
		pm.insert("Noodles",20);
		
			pm.insert("Pasta",100); 
		pm.insert("Abc",180);
				pm.insert("Macroni",190);
		pm.insert("cake",520);
		
		pm.printTable();
	return 0;
}