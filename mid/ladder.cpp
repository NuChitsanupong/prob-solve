<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n, m, dice;
    int cur = 0;
    cin >> n >> m;
    int field[n];
    for (int i = 0; i < n; i++)
    {
        cin >> field[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> dice;
        cur+=dice;
        if (cur < n)
        {
            cur+=field[cur-1];
        }
    }
    if(cur>n)
    {
        printf("%d", n);
    }
    else if(cur<0)
    {
        printf("0");
    }
    else
    {
        printf("%d", cur);
    }
=======
#include <iostream>

using namespace std;

int main()
{
    int n, m, dice;
    int cur = 0;
    cin >> n >> m;
    int field[n];
    for (int i = 0; i < n; i++)
    {
        cin >> field[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> dice;
        cur+=dice;
        if (cur < n)
        {
            cur+=field[cur-1];
        }
    }
    if(cur>n)
    {
        printf("%d", n);
    }
    else if(cur<0)
    {
        printf("0");
    }
    else
    {
        printf("%d", cur);
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}