#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> aa;
    scanf("%d", &n);
    for (int i = 0; i < 4*n; i++)
    {
        int x;
        if (i >= 3 * n)
        {
            x = i - 3*n;
            aa.push_back(2 * n - x);
        }
        else if (i >= 2 * n)
        {
            x = i - 2*n;
            aa.push_back(n - x);
        }
        else if (i >= n)
        {
            x = i-n;
            aa.push_back(4 * n - x);
        }
        else
        {
            x = i;
            aa.push_back(3 * n - x);
        }
    }
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (field[i][j]=='/')
            {
                aa[0] = 4;
                aa[1] = 3;
                aa[2] = 2;
                aa[3] = 1;
            }
            if (field[i][j]=='\\')
            {
                aa[0] = 2;
                aa[1] = 1;
                aa[2] = 4;
                aa[3] = 3;
            }
        }
    }
    for (int i = 0; i < 4 * n; i++)
    {
        printf("%d\n", aa[i]);
    }

    return 0;
}