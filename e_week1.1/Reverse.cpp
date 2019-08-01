<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n;
    int x[1000];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int y = 0; y < n; y++)
    {
        cout << x[n - y - 1] << endl;
    }
=======
#include <iostream>

using namespace std;

int main()
{
    int n;
    int x[1000];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int y = 0; y < n; y++)
    {
        cout << x[n - y - 1] << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}