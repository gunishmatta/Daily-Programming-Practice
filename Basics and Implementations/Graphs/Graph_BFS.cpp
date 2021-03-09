#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map < T, list<T> > l;
  
    public:
    void addEdge(T x,T y)
    {
        l[x].push_back(y);
        l[y].push_back(x);

    }

void bfs (T source)
{

    map<T, bool> visited; // to keep track of visited nodes
    queue<T> q;
    q.push(source); //pusing the source node in queue

    visited[source] = true; 

    while(!q.empty())
    {
        T node = q.front();
        q.pop();
        cout << node << " ";
        for (int neighbour : l[node])
        {
            if(!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }

    }
}


};

int main(int argc, char const *argv[])
{

    Graph<int> g;
    g.addEdge(1, 2);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(3,4);
    
    
   
    g.bfs(1);

    return 0;
}
