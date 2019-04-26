#include <iostream>

using namespace std;
int n, m, a, b, x, y, key = 1;
int sum = 0;
int visit[50][50];
char field[50][50];

int run(int i, int j)
{
    if (i < 0 || j > m - 1 || j < 0 || i > n - 1)
    {
        return 0;
    }
    else
    {
        if (visit[i][j] == 1)
        {
            return 0;
        }
        else
        {
            visit[i][j] = 1;
            if (i == x - 1 && j == y - 1)
            {
                return sum;
            }
            else if (field[i][j] == '#')
            {
                return 0;
            }
            else if (field[i][j] == '*')
            {
                if (key = 1)
                {
                    key = 0;
                    sum += 1;
                    return run(i + 1, j) || run(i, j + 1) || run(i - 1, j) || run(i, j - 1);
                }
                else
                {
                    return 0;
                }
            }
            else if (field[i][j] == '.')
            {
                sum += 1;
                return run(i + 1, j) || run(i, j + 1) || run(i - 1, j) || run(i, j - 1);
            }
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    scanf("%d %d %d %d", &a, &b, &x, &y);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", field[i]);
    }
    int ans = run(a, b);
    if (ans>0)
        printf("%d", ans);
    else
        printf("-1");
    
}