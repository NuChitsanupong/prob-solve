#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    while (true)
    {
        cin >> m;
        if (m == 0)
        {
            break;
        }
        n++;
    }
    if (n % 2 == 0)
    {
        cout << "K";
    }
    else
    {
        cout << "C";
    }
}