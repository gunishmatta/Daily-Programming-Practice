#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Graph
{
    map<T, list<T>> l;

    public:
    void addEdge(T x,T y)
    {
        l[x].push_back(y);
    }

    void bfs()
    {
        
    }


};

int main(int argc, const char** argv) {



    return 0;
}