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
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 'N')
        {
            y += 1;
        }
        else if (t[i] == 'S')
        {
            y -= 1;
        }
        else if (t[i] == 'E')
        {
            x += 1;
        }
        else if (t[i] == 'W')
        {
            x -= 1;
        }
    }
    if (n > c)
    {
        if (x >= 0 && y >= 0)
        {
            while (c > 0)
            {
                if (x > 0)
                {
                    x += 1;
                    c -= 1;
                }
                else
                {
                    y += 1;
                    c -= 1;
                }
            }
        }
        else if (x < 0 && y >= 0)
        {
            while (c > 0)
            {
                if (x < 0)
                {
                    x -= 1;
                    c -= 1;
                }
                else
                {
                    y += 1;
                    c -= 1;
                }
            }
        }
        else if (x < 0 && y < 0)
        {
            while (c > 0)
            {
                if (x < 0)
                {
                    x -= 1;
                    c -= 1;
                }
                else
                {
                    y -= 1;
                    c -= 1;
                }
            }
        }
        else if (x >= 0 && y < 0)
        {
            while (c > 0)
            {
                if (x > 0)
                {
                    x += 1;
                    c -= 1;
                }
                else
                {
                    y -= 1;
                    c -= 1;
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