#include <stdio.h>

using namespace std;

int main()
{
    int n, x, y, r;
    int ans = 9999999;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x, &y, &r);
        if (y >= 0)
        {
            int temp = y - r;
            if (temp < ans)
            {
                ans = temp;
            }
        }
        else if (y < 0)
        {
            int temp = (-y) - r;
            if (temp < ans)
            {
                ans = temp;
            }
        }
    }
    if (ans == 9999999 || ans <= 0)
    {
        ans = -1;
    }
    printf("%d\n", ans);
}