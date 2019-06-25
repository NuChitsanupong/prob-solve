#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t = "";
    cin >> t;
    int n = t.length();
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
        else if (t[i] == 'Z')
        {
            x = 0;
            y = 0;
        }
    }
    cout << x << " " << y << endl;
}