<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n = "";
    cin >> n;
    int l = n.length();
    string b = "abcdefghijklmnopqrstuvwxyz";
    string c = "efghijklmnopqrstuvwxyzabcd";
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
=======
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n = "";
    cin >> n;
    int l = n.length();
    string b = "abcdefghijklmnopqrstuvwxyz";
    string c = "efghijklmnopqrstuvwxyzabcd";
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
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}