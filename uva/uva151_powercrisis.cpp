#include <stdio.h>
#include <vector>

using namespace std;
vector<int> set;

int Com(int n, int k)
{
    int ll[101];
    int i;
    int j;
    int head;
    int prev;
    int last;
    for (i = 2; i < n; i++)
    {
        ll[i] = i + 1;
    }
    ll[n] = 2, head = 2, prev = n;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < k; j++)
        {
            prev = head, head = ll[head];
        }
        last = head;
        ll[prev] = ll[head];
        head = ll[head];
    }
    if (last == 13)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int D[100];
    int N;
    int count;
    int i;
    for (i = 14; i < 100; i++)
    {
        count = 2;
        while (Com(i, count) == 0)
        {
            count += 1;
        }
        D[i] = count;
    }
    D[13] = 1;
    while (scanf("%d", &N) == 1 && N)
    {
        set.push_back(D[N]);
    }
    for (i = 0; i < set.size(); i++)
    {
        printf("%d\n", set[i]);
    }
    return 0;
}