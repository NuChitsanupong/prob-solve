#include <stdio.h>

int main()
{
    int n, m;
    int i, j, k;
    char field[105][105];
    while (scanf("%d", &n) == 1 && n)
    {
        scanf("%d", &m);
        for (i = 0; i < n; i++)
        {
            scanf("%s", &field[i]);
        }
        int ans = 0;
        int length, width, tmp;
        for (i = 0; i < n; i++)
        {
            int sum[105] = {};
            for (j = i; j < n; j++)
            {
                for (k = 0; k < m; k++)
                {
                    sum[k] += field[j][k] - '0';
                    if (k == 0 || tmp != length * width)
                    {
                        tmp = 0, length = 0;
                    }
                    tmp += sum[k];
                    length+=1;
                    width = j - i + 1;
                    if (tmp == length * width)
                    {
                        ans += length;
                    }
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}