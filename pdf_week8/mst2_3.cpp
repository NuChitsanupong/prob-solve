#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
vector<int> set;
vector<pair<int,pair<int,int>>> sas;
int mst = 0;

class DisjointSet
{
    unordered_map<int, int> parent;

  public:
    void makeSet(vector<int> const &set)
    {
        for (int i : set)
            parent[i] = i;
    }
    int Find(int k)
    {
        if (parent[k] == k)
            return k;
        return Find(parent[k]);
    }
    void Union(int a, int b, int c)
    {
        int x = Find(a);
        int y = Find(b);
        if (x != y)
        {
            mst += c;
            parent[x] = y;
        }
    }
};

int main()
{
    int V, E;
    scanf("%d %d", &V, &E);
    for (int i = 1; i <= V; i++)
    {
        set.push_back(i);
    }

    DisjointSet s;

    s.makeSet(set);
    
    for (int i = 1; i <= E; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        sas.push_back(make_pair(z,make_pair(x,y)));
    }

    sort(sas.begin(),sas.end());

    for (int i = 0; i < E; i++)
    {
        int z = sas[i].first;
        int x = sas[i].second.first;
        int y = sas[i].second.second;
        s.Union(x, y, z);
    }

    printf("%d\n", mst);
    
    return 0;
}