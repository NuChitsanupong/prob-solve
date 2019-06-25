#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int p = 0;
    cin >> n;
    int lo[2 * n];
    for (int j = 0; j < 2 * n; j++)
    {
        cin >> lo[j];
    }
    for (int i = 0; i < 2 * n; i++)
    {
        if (sqrt(pow(lo[i - 1], 2) + pow(lo[i], 2)) <= 2 && i % 2 == 1)
        {
            p += 5;
        }
        else if (sqrt(pow(lo[i - 1], 2) + pow(lo[i], 2)) <= 4 && i % 2 == 1)
        {
            p += 4;
        }
        else if (sqrt(pow(lo[i - 1], 2) + pow(lo[i], 2)) <= 6 && i % 2 == 1)
        {
            p += 3;
        }
        else if (sqrt(pow(lo[i - 1], 2) + pow(lo[i], 2)) <= 8 && i % 2 == 1)
        {
            p += 2;
        }
        else if (sqrt(pow(lo[i - 1], 2) + pow(lo[i], 2)) <= 10 && i % 2 == 1)
        {
            p += 1;
        }
        else
        {
            p += 0;
        }
    }
    cout << p << endl;
}
