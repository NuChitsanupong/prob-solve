#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] > 0)
        {
            s += num[i];
        }
    }
    cout << s << endl;
}