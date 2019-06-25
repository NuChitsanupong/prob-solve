#include <iostream>
using namespace std;

void find_max_min(int b[], int n,int *x,int *y)
{
    *x = 0;
    *y = b[0];
    for (int i = 0; i < n; i++)
    {
        if (*x < b[i])
        {
            *x = b[i];
        }
        else if (*y > b[i])
        {
            *y = b[i];
        }
    }
}

main()
{
    int a[1000];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx, mn;
    find_max_min(a, n, &mx, &mn);

    cout << "max = " << mx << endl;
    cout << "min = " << mn << endl;
}
