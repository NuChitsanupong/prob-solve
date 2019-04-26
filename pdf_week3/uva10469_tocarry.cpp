#include <iostream>
#include <string>
using namespace std;

string bin(int n)
{
    string na = "00000000000000000000000000000000";
    int a[32], i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        na[31 - i] = char(a[i] + 48);
    }
    return na;
}

int Pow(int x, int power)
{
    int result;
    int i;
    result = 1.0;
    for (i = 1; i <= power; i++)
    {
        result = result * x;
    }
    return (result);
}

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        string na = bin(n1);
        string nb = bin(n2);
        string n = "00000000000000000000000000000000";
        for (int i = 31; i >= 0; i--)
        {
            if (na[i] == nb[i])
            {
                n[i] = '0';
            }
            else
            {
                n[i] = '1';
            }
        }
        int m = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (n[i] != '0')
            {
                m += Pow(2, 31 - i);
            }
        }
        cout << m << endl;
    }
}