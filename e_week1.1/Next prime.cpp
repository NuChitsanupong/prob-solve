#include <iostream>

using namespace std;

bool check_prime(int p)
{
    if (p <= 1)
    {
        return false;
    }
    int i = 2;
    while (i < p)
    {
        if (p % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    int p;
    cin >> p;

    while (check_prime(p+1)==false)
    {
        p++;
    }
    if (check_prime(p+1)==true)
    {
        cout << p+1 << endl;
    }

}