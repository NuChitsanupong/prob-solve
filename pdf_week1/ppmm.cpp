#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    string c = "";
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i % 2 == 0)
        {
            cin >> num[i/2];
        }
        else
        {
            cin >> c[(i-1)/2];
        }
    }
    int s = num[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (c[i] == '+')
        {
            s += num[i + 1];
        }
        else if (c[i] == '-')
        {
            s -= num[i + 1];
        }
    }
    cout << s << endl;
}