#include <iostream>
#include <string>
using namespace std;

int main()
{
    int price[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> price[i];
    }
    int n;
    cin >> n;
    int num[n];
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] == 1)
        {
            s1 += price[0];
        }
        else if (num[i] == 2)
        {
            s2 += price[1];
        }
        else if (num[i] == 3)
        {
            s3 += price[2];
        }
    }
    if (s1 == 0)
    {
        if (s2 > s3)
        {
            s1 = s2;
        }
        else if (s2 < s3)
        {
            s1 = s3;
        }
    }
    if (s1 > s2 && s2 != 0)
    {
        s1 = s2;
    }
    if (s1 > s3 && s3 != 0)
    {
        s1 = s3;
    }
    cout << s1 << endl;
}