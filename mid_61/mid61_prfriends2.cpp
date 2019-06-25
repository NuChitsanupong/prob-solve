#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool isPrime;
    int l, r, nprime = 0, k = 0;
    vector<int> box;
    scanf("%d %d", &l, &r);
    vector<bool> primes(r, true);
    if (l > 0 && l < 3)
    {
        box.push_back(1);
        box.push_back(2);
        k += 2;
    }
    else if (l > 1 && l < 3)
    {
        box.push_back(2);
        k += 1;
    }
    for (int i = 3; i * i < r; i += 2)
    {
        for (int j = 3; j * i < r; j += 2)
            primes[j * i] = false;
    }
    for (int i = 3; i < r; i += 2)
    {
        if (primes[i] == true && i >= l)
        {
            k += 1;
            box.push_back(i);
            // for (int j = 0; j < box.size(); j++)
            //     cout << box[j] << " ";
            // cout << endl;
            if (k > 1 && (box[k - 1] - box[k - 2] == 2))
                nprime += 1;
        }
    }
    printf("%d", nprime);
}