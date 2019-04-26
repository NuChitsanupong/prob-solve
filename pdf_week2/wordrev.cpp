#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n = "";
    cin >> n;
    string c = n;
    int i = 0;
    int j = 0;
    while (i < n.length())
    {
        while (n[i] != '_' && i < n.length())
        {
            j++;
            i++;
        }
        for (int k = 0; k < j; k++)
        {
            c[i - j + k] = n[i - k - 1];
        }
        j = 0;
        i++;
    }
    cout << c << endl;
}