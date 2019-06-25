#include <stdio.h>
#include <vector>

using namespace std;
vector<int> set;

int main()
{
    int t, n, m;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);
        set.push_back((n / 3) * (m / 3));
    }
    for (int i = 0; i < set.size(); i++)
    {
        printf("%d\n", set[i]);
    }
}