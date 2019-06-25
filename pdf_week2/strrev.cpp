#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n = "";
    cin >> n;
    string c = n;
    for (int i = 0; i < n.length(); i++)
    {
        c[i] = n[n.length() - i - 1];
    }

    cout << c << endl;
}