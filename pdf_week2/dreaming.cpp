<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n1 = "";
    string n2 = "";
    cin >> n1 >> n2;
    int l1 = n1.length();
    int l2 = n2.length();
    if (l1 > l2)
    {
        string n3 = n1;
        for (int i = 0; i < l1; i++)
        {
            if (i < l1 - l2)
            {
                n3[i] = '0';
            }
            else
            {
                n3[i] = n2[i - l1 + l2];
            }
        }
        n2 = n3;
    }
    else if (l2 > l1)
    {
        string n3 = n2;
        for (int i = 0; i < l2; i++)
        {
            if (i < l2 - l1)
            {
                n3[i] = '0';
            }
            else
            {
                n3[i] = n1[i - l2 + l1];
            }
        }
        n1 = n3;
    }
    string n4 = n1;
    n1 = '0' + n1;
    n2 = '0' + n2;
    l1 = n1.length();
    l2 = n2.length();
    string n3 = '0' + n1;
    int t = 0;
    for (int i = 0; i < l1; i++)
    {
        int m = int(n1[l1 - i - 1]) + int(n2[l1 - i - 1]) - 48;
        if (t == 0)
        {
            if (m < 58)
            {
                n3[l1 - i] = char(m);
            }
            else
            {
                n3[l1 - i] = char(m - 10);
                t = 1;
            }
        }
        else
        {
            if (m < 57)
            {
                n3[l1 - i] = char(m + t);
                t = 0;
            }
            else
            {
                n3[l1 - i] = char(m - 10 + t);
            }
        }
    }
    if (n3[0] == '0' && n3[1] != '0')
    {
        string n5 = n1;
        for (int i = 0; i < l1; i++)
        {
            n5[i] = n3[i + 1];
        }
        cout << n5 << endl;
    }
    else if (n3[0] == '0' && n3[1] == '0')
    {
        string n5 = n4;
        for (int i = 0; i < l1; i++)
        {
            n5[i] = n3[i + 2];
        }
        cout << n5 << endl;
    }
=======
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n1 = "";
    string n2 = "";
    cin >> n1 >> n2;
    int l1 = n1.length();
    int l2 = n2.length();
    if (l1 > l2)
    {
        string n3 = n1;
        for (int i = 0; i < l1; i++)
        {
            if (i < l1 - l2)
            {
                n3[i] = '0';
            }
            else
            {
                n3[i] = n2[i - l1 + l2];
            }
        }
        n2 = n3;
    }
    else if (l2 > l1)
    {
        string n3 = n2;
        for (int i = 0; i < l2; i++)
        {
            if (i < l2 - l1)
            {
                n3[i] = '0';
            }
            else
            {
                n3[i] = n1[i - l2 + l1];
            }
        }
        n1 = n3;
    }
    string n4 = n1;
    n1 = '0' + n1;
    n2 = '0' + n2;
    l1 = n1.length();
    l2 = n2.length();
    string n3 = '0' + n1;
    int t = 0;
    for (int i = 0; i < l1; i++)
    {
        int m = int(n1[l1 - i - 1]) + int(n2[l1 - i - 1]) - 48;
        if (t == 0)
        {
            if (m < 58)
            {
                n3[l1 - i] = char(m);
            }
            else
            {
                n3[l1 - i] = char(m - 10);
                t = 1;
            }
        }
        else
        {
            if (m < 57)
            {
                n3[l1 - i] = char(m + t);
                t = 0;
            }
            else
            {
                n3[l1 - i] = char(m - 10 + t);
            }
        }
    }
    if (n3[0] == '0' && n3[1] != '0')
    {
        string n5 = n1;
        for (int i = 0; i < l1; i++)
        {
            n5[i] = n3[i + 1];
        }
        cout << n5 << endl;
    }
    else if (n3[0] == '0' && n3[1] == '0')
    {
        string n5 = n4;
        for (int i = 0; i < l1; i++)
        {
            n5[i] = n3[i + 2];
        }
        cout << n5 << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}