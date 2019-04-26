#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        int min = n;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            num[i] = i + 1;
        }
        for (int i = 1; i <= n; i++)
        {
            int x = 0;
            while (x <= i)
            {
                while(num[i-1] != 0)
                {
                    num[i-1]=0;
                    x++;
                }
            }
        }
    }
}