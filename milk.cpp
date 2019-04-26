#include <vector>
#include <unordered_map>

using namespace std;
vector<int> set;
unordered_map<int, int> parent;

int Find(int k)
{
    if (parent[k] == k)
        return k;
    return Find(parent[k]);
}
void Union(int a, int b)
{
    int x = Find(a);
    int y = Find(b);
    if (x != y)
    {
        parent[x] = y;
    }
}
bool cycle(int a, int b)
{
    int x = Find(a);
    int y = Find(b);
    if (x != y)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int V, E;
    scanf("%d %d", &V, &E);
    for (int i = 1; i <= V; i++)
    {
        set.push_back(i);
        parent[i] = i;
    }

    for (int i = 0; i < 2 * E; i++)
    {
        char x;
        int y, z;
        scanf("%c %d %d", &x, &y, &z);
        if (x == 'c')
        {
            Union(y, z);
        }
        else if (x == 'q')
        {
            if (cycle(y, z))
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
    }

    return 0;
}
