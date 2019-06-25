#include <vector>
#include <unordered_map>

using namespace std;
vector<int> set;
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

void printSets(vector<int> const &set, DisjointSet &s)
{
    for (int i : set)
        printf("%d ", s.Find(i));
    printf("\n");
}

int main()
{
    int V, E;
    scanf("%d %d", &V, &E);
    for (int i = 1; i <= V; i++)
    {
        set.insert(set.begin() + i - 1, i);
    }

    DisjointSet s;

    s.makeSet(set);
    printSets(set, s);

    for (int i = 1; i <= E; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        s.Union(x, y, z);
        printSets(set, s);
        printf("%d\n", mst);
    }

    return 0;
}