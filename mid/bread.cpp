#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> vertex[n];
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        for (int j = 0; j < z; j++)
        {
            vertex[x].push_back(y);
        }
    }