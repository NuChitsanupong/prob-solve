#include <iostream>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char field[n][m];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", field[i]);
    }
    int i = 0, j = 0;
    while (j < m - 2 && i < n - 2)
    {
        if (field[i][j] == '.' && field[i][j + 1] == '.' && field[i + 1][j] == '.' && field[i + 1][j + 1] == '.')
        {
            if (field[i + 1][j] == '.' && field[i + 1][j + 1] == '.' && field[i + 2][j] == '.' && field[i + 2][j + 1] == '.')
            {
                i++;
            }
            else if (field[i][j - 1] == '.' && field[i][j] == '.' && field[i + 1][j - 1] == '.' && field[i + 1][j] == '.' && j > 0)
            {
                j--;
            }
            else if (field[i][j + 1] == '.' && field[i][j + 2] == '.' && field[i + 1][j + 1] == '.' && field[i + 1][j + 2] == '.' && j < m - 2)
            {
                j++;
            }
            else
            {
                i = 0;
                j++;
            }
        }
        else
        {
            i = 0;
            j++;
        }
    }
    if (i == n - 2)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}
