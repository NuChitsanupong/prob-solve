<<<<<<< HEAD
#include <iostream>

using namespace std;
int n, m;
char field[30][30];

int run(int i, int j)
{
    if (i < 0 || j >= m || j < 0 || i >= n)
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
            if (fields[i][j] == '$')
            {
                e++;
            }
            else if (fields[i][j] == '#')
            {
                return 0;
            }
            else if (fields[i][j] == '.')
            {
                return run(i + 1, j) || run(i, j + 1) || run(i - 1, j) || run(i, j - 1);
            }
        }
    }
}

int main()
{
    int c = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", field[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (field[i][j] == '.' && field[i][j + 1] == '.' && field[i + 1][j] == '.' && field[i + 1][j + 1] == '.')
            {
                fields[i][j] = '.';
            }
            else
            {
                fields[i][j] = '#';
            }
        }
    }
    for (int i = 0; i < m - 1; i++)
    {
        if (run(0, i) == 1)
        {
            c++;
        }
    }
    if (c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
=======
#include <iostream>

using namespace std;
int n, m;
char field[30][30];

int run(int i, int j)
{
    if (i < 0 || j >= m || j < 0 || i >= n)
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
            if (fields[i][j] == '$')
            {
                e++;
            }
            else if (fields[i][j] == '#')
            {
                return 0;
            }
            else if (fields[i][j] == '.')
            {
                return run(i + 1, j) || run(i, j + 1) || run(i - 1, j) || run(i, j - 1);
            }
        }
    }
}

int main()
{
    int c = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", field[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (field[i][j] == '.' && field[i][j + 1] == '.' && field[i + 1][j] == '.' && field[i + 1][j + 1] == '.')
            {
                fields[i][j] = '.';
            }
            else
            {
                fields[i][j] = '#';
            }
        }
    }
    for (int i = 0; i < m - 1; i++)
    {
        if (run(0, i) == 1)
        {
            c++;
        }
    }
    if (c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}