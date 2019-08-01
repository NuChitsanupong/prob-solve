<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n1, n2, x, y;
    cin >> n1 >> n2;
    x = n1;
    y = n2;
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    cout << x / n1 << "/" << y / n1 << endl;
=======
#include <iostream>

using namespace std;

int main()
{
    int n1, n2, x, y;
    cin >> n1 >> n2;
    x = n1;
    y = n2;
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    cout << x / n1 << "/" << y / n1 << endl;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}