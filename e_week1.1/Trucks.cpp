<<<<<<< HEAD
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    int m = 0;
    int t = 1;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (m + x[i] > 1000)
        {
            m = x[i];
            t++;
        }
        else
        {
            m = m + x[i];
        }
    }
    cout << t << endl;
=======
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    int m = 0;
    int t = 1;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (m + x[i] > 1000)
        {
            m = x[i];
            t++;
        }
        else
        {
            m = m + x[i];
        }
    }
    cout << t << endl;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}