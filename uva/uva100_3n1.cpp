<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        int na = n1;
        int nb = n2;
        if (n2 < n1)
        {
            int n3 = n1;
            n1 = n2;
            n2 = n3;
        }
        int max = 0;
        int c = 1;
        int x = n1;
        while (x <= n2)
        {
            int i = x;
            while (i != 1)
            {
                if (i % 2 == 0)
                {
                    i = i / 2;
                }
                else
                {
                    i = (3 * i) + 1;
                }
                ++c;
            }
            if (c > max)
            {
                max = c;
            }
            c = 1;
            x++;
        }
        cout << na << " " << nb << " " << max << endl;
    }
=======
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        int na = n1;
        int nb = n2;
        if (n2 < n1)
        {
            int n3 = n1;
            n1 = n2;
            n2 = n3;
        }
        int max = 0;
        int c = 1;
        int x = n1;
        while (x <= n2)
        {
            int i = x;
            while (i != 1)
            {
                if (i % 2 == 0)
                {
                    i = i / 2;
                }
                else
                {
                    i = (3 * i) + 1;
                }
                ++c;
            }
            if (c > max)
            {
                max = c;
            }
            c = 1;
            x++;
        }
        cout << na << " " << nb << " " << max << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}