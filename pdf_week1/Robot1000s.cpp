#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t = "";
    cin >> t;
    int n = t.length();
    int c;
    cin >> c;
    int x = 0;
    int y = 0;
    int N = 0;
    int S = 0;
    int E = 0;
    int W = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 'N')
        {
            y += 1;
            N += 1;
        }
        else if (t[i] == 'S')
        {
            y -= 1;
            S += 1;
        }
        else if (t[i] == 'E')
        {
            x += 1;
            E += 1;
        }
        else if (t[i] == 'W')
        {
            x -= 1;
            W += 1;
        }
    }
    if (n > 2)
    {
        if (abs(N - S) >= c)
        {
            if (E == 0 && W == 0)
            {
                if (N >= S)
                {
                    y += c - (n - (N - S));
                }
                else
                {
                    y -= c - (n - (S - N));
                }
            }
            else
            {
                if (N >= S)
                {
                    y += c;
                }
                else
                {
                    y -= c;
                }
            }
        }
        else
        {
            if (N != 0 || S != 0)
            {
                if (N >= S)
                {
                    c -= S;
                    y += c;
                }
                else
                {
                    c -= N;
                    y -= c;
                }
                if (E >= W)
                {
                    x += c;
                }
                else
                {
                    x -= c;
                }
            }
            else
            {
                if (E >= W)
                {
                    x += c - (n - (E - W));
                }
                else
                {
                    x -= c - (n - (W - E));
                }
            }
        }
        cout << 2 * (abs(x) + abs(y)) << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}