<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;

int isPrimeNumber(int n)
{
    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    bool isPrime;
    int l, r, nprime = 0, i = 0;
    vector<int> box;
    scanf("%d %d", &l, &r);
    for (int n = l; n < r; n++)
    {
        isPrime = isPrimeNumber(n);
        if (isPrime == true)
        {
            box.push_back(n);
            i += 1;
            if (i > 1 && (box[i-1] - box[i-2] == 2))
                nprime += 1;
        }
    }
    printf("%d", nprime);
=======
#include <iostream>
#include <vector>

using namespace std;

int isPrimeNumber(int n)
{
    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    bool isPrime;
    int l, r, nprime = 0, i = 0;
    vector<int> box;
    scanf("%d %d", &l, &r);
    for (int n = l; n < r; n++)
    {
        isPrime = isPrimeNumber(n);
        if (isPrime == true)
        {
            box.push_back(n);
            i += 1;
            if (i > 1 && (box[i-1] - box[i-2] == 2))
                nprime += 1;
        }
    }
    printf("%d", nprime);
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}