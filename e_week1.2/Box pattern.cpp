<<<<<<< HEAD
#include <iostream>
using namespace std;

main()
{
    int n, j;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        j = i;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        for (int k = 0; k < i; k++)
        {
            if (k > 0)
            {
                cout << k;
            }
        }
        cout << endl;
    }
=======
#include <iostream>
using namespace std;

main()
{
    int n, j;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        j = i;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        for (int k = 0; k < i; k++)
        {
            if (k > 0)
            {
                cout << k;
            }
        }
        cout << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}