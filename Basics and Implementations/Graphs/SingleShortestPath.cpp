#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Graph
{

    map<T, list<T>> l;

public:
    void addEdge(T x, T y)
    {

        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(T source)
    {
        map<T, int> distance;
        queue<T> q;

    for(auto node_pair:l)
    {
        T node = node_pair.first;
        distance[node] = INT_MAX;

    }


        q.push(source);
        distance[source] = 0;

        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            for (auto neighbour : l[node])
            {
                cout << endl;
                if (distance[neighbour]==INT_MAX)
                {
                    q.push(neighbour);
                    distance[neighbour] = distance[node] + 1;
                }
              
            }

    

        }

    for(auto node_pair:l)
        {
            T node = node_pair.first;
            int d = distance[node];
            cout << "Node " << node << " Distance from src " << d << endl;
        }


    }
};

int main()
{
    Graph<int> g;
    g.addEdge(1, 2); 
    g.addEdge(1, 0);
    g.addEdge(0,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.bfs(0);
}