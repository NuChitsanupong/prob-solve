#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
vector<int> set;
vector<int> dist;
vector<pair<int, pair<int, int>>> sas;
unordered_map<int, int> parent;
int mst = 0;
int far = 0;

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
    if (x > y)
    {
        parent[y] = x;
        mst += c;
        if (c > far)
        {
            far = c;
        }
    }
    else if (x < y)
    {
        parent[x] = y;
        mst += c;
        if (c > far)
        {
            far = c;
        }
    }
}

int main()
{
    int V, E, D;
    scanf("%d %d", &V, &E);
    for (int i = 1; i <= V; i++)
    {
        set.push_back(i);
        parent[i] = i;
    }
    for (int i = 0; i < V; i++)
    {
        scanf("%d", &D);
        dist.push_back(D);
    }
    for (int i = 1; i <= E; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        // printf("%d %d\n", dist[x-1],dist[y-1]);
        if (z%(dist[x-1]+dist[y-1]) !=0)
        {
            z = z/(dist[x-1]+dist[y-1])+1;
        }
        else
        {
            z = z/(dist[x-1]+dist[y-1]);
        }
        sas.push_back(make_pair(z, make_pair(x, y)));
    }
    sort(sas.begin(), sas.end());

    for (int i = 0; i < E; i++)
    {
        int z = sas[i].first;
        int x = sas[i].second.first;
        int y = sas[i].second.second;
        Union(x, y, z);
    }
    printf("%d\n", far);
    return 0;
}