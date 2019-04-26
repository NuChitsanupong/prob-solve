#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> a;
    int m, op, x, first, last, mid, ans;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &op, &x);
        // cin >> op >> x;
        first = 0;
        last = a.size();
        mid = (first + last) / 2;
        while (first < last)
        {
            mid = (first + last) / 2;
            if (x < a[mid])
                last = mid-1;
            else if (x > a[mid])
                first = mid + 1;
            else
                break;
        }
        if (op == 1)
        {
            a.insert(a.begin() + (first + last) / 2, x);
        }
        else
        {
            ans = (first + last) / 2;
            if (ans >= a.size())
                printf("0\n");
                // cout << 0 << endl;
            else
            {
                if (a[ans] == x)
                    printf("%d\n", a.size() - ans - 1);
                    // cout << a.size() - ans - 1 << endl;
                else
                    printf("%d\n", a.size() - ans);
                    // cout << a.size() - ans << endl;
            }
        }
    }
}
