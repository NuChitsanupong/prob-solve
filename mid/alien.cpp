#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, xx, yy, r;
    int ans = 0;
    cin >> n >> xx >> yy >> r;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int tmp = (xx - x) * (xx - x) + (yy - y) * (yy - y);
        if (tmp <= r * r)
        {
            ans += 1;
        }
    }
    cout << ans;
}