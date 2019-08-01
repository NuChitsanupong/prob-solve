<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int p;
    int i = 1;
    int n = 1;
    cin >> p;
    while (i <= p)
    {
        while (n <= p - i)
        {
            cout << " ";
            n++;
        }
        n = 1;
        while (n <= i)
        {
            cout << "*";
            n++;
        }
        n = 1;
        cout << endl;
        i++;
    }
=======
#include <iostream>

using namespace std;

int main()
{
    int p;
    int i = 1;
    int n = 1;
    cin >> p;
    while (i <= p)
    {
        while (n <= p - i)
        {
            cout << " ";
            n++;
        }
        n = 1;
        while (n <= i)
        {
            cout << "*";
            n++;
        }
        n = 1;
        cout << endl;
        i++;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}