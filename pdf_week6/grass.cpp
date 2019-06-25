#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<char> field[n];
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        for (int j = 0; j < n; j++)
        {
            field[i].push_back(x[j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        char c;
        int num;
        cin >> c >> num;
        if (c == 'L')
        {
            int j = 0;
            while (field[num - 1][j] != '#' && field[num - 1][j] != '.' && j < n)
            {
                field[num - 1][j] = '.';
                j++;
            }
        }
        else if (c == 'R')
        {
            int j = n - 1;
            while (field[num - 1][j] != '#' && field[num - 1][j] != '.' && j >= 0)
            {
                field[num - 1][j] = '.';
                if (j > 0)
                {
                    j--;
                }
            }
        }
        else if (c == 'U')
        {
            int j = 0;
            while (field[j][num - 1] != '#' && field[j][num - 1] != '.' && j < n)
            {
                field[j][num - 1] = '.';
                j++;
            }
        }
        else if (c == 'D')
        {
            int j = n - 1;
            while (field[j][num - 1] != '#' && field[j][num - 1] != '.' && j >= 0)
            {
                field[j][num - 1] = '.';
                if (j > 0)
                {
                    j--;
                }
            }
        }
        else if (c == 'A')
        {
            for (int j = 0; j < n; j++)
            {
                if (field[num - 1][j] != '#')
                {
                    field[num - 1][j] = 'x';
                }
            }
        }
        else if (c == 'B')
        {
            for (int j = 0; j < n; j++)
            {
                if (field[j][num - 1] != '#')
                {
                    field[j][num - 1] = 'x';
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << field[i][j];
        }
        cout << endl;
    }
}