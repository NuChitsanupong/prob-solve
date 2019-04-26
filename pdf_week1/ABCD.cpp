#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num[4];
    int s = 0;
    for (int y = 0; y < 4; y++)
    {
        cin >> num[y];
    }
    for (int y = 0; y < 4; y++)
    {
        s += num[y];
    }
    cout << s << endl;
}