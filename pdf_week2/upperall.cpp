#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n = "";
    cin >> n;
    int l = n.length();
    string b = "abcdefghijklmnopqrstuvwxyz";
    string c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b.length(); j++)
        {
            if (n[i] == b[j])
            {
                n[i] = c[j];
                break;
            }
        }
    }
    cout << n << endl;
}