#include <stdio.h>

using namespace std;

int main()
{
    char s[15];
    int n;
    scanf("%d", &n);
    int L, R;
    int A;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
            L = (s[0] - 'A') * 26 * 26 + (s[1] - 'A') * 26 + (s[2] - 'A');
        R = (s[4] - '0') * 1000 + (s[5] - '0') * 100 + (s[6] - '0') * 10 + (s[7] - '0');
        if (L - R >= 0)
        {
            A = L - R;
        }
        else
        {
            A = -(L - R);
        }
        if (A <= 100)
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }
    }
    return 0;
}