#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int m;
    cin >> n;
    string t = n;
    m = n.length();
    for (int y = 0; y < m; y++)
    {
        t[y] = n[m - y - 1];
    }
    if (t == n)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}