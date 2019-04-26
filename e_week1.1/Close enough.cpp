#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, l;
    int m = 0;
    int x[1000];
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + i < n; j++)
        {
            if (x[i] - x[j + i] != 0 && abs(x[i] - x[j + i]) <= l)
            {
                m++;
            }
        }
    }
    cout << m << endl;
}