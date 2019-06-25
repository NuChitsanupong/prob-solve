#include <iostream>
#include <algorithm>

using namespace std;

long int c[2000005];
int i, n;
int main()
{
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        for (i = 0; i < n; i++)
        {
            ios::sync_with_stdio(false);
            cin >> c[i];
        }
        sort(c, c + i);
        for (i = 0; i < n; i++)
        {
            cout << c[i];
            if (i < (n - 1))
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}