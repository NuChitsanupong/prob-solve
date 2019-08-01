#include <stdio.h>

using namespace std;

int main()
{
    int a[55], i, j, m, n, p, t, tc;
    scanf("%d", &tc);
    for (t = 1; t <= tc; t++)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        m = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    p = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = p;
                    m++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", m);
    }
    return 0;
}