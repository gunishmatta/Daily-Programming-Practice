#include<iostream>
#include<list>
#include<unordered_map>
#include<cstring>
using namespace std;


class Graph
{

    unordered_map < string, list< pair<string, int> > > l;

    public:

    void addEdge(string x,string y,bool isBidirectional,int weight)
    {

        l[x].push_back(make_pair(y, weight));
        if(isBidirectional)
        {
            l[y].push_back(make_pair(x, weight));
        }
    }

    void printGraph()
    {

        for(auto p:l)
        {
            string origin = p.first;
            list<pair<string, int>> neighbours = p.second;
            cout << "From " << origin << " -> " << endl;
        
for(auto neighbour: neighbours)
{
    string destination = neighbour.first;
    int distance = neighbour.second;
    cout << destination << " " << distance << endl;
}
cout << endl;
        }
    }


};


int main(int argc, char const *argv[])
{

    Graph g;
    g.addEdge("A", "B", true,20);
    g.addEdge("A", "C", true, 10);
    g.addEdge("B", "D", true, 30);
    g.addEdge("C", "D", true, 40);
    g.addEdge("A", "D", false, 50);
    g.printGraph();

    return 0;
}
