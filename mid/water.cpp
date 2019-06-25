#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int tmp = 0;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        int s = 0;
        cin >> num;
        if (tmp - num > 10)
        {
            s = (tmp - num) * 10;
        }
        if (s > 700)
        {
            s = 700;
        }
        ans += s;
        tmp = num;
    }
    cout << ans;
}