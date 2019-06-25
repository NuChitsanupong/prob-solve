#include <iostream>
#include <string>
using namespace std;

int main()
{
    int height[1000];
    int Tall[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        for (int j = 0; j < n; j++)
        {
            if (height[i] < height[j])
            {
                m++;
            }
        }
        Tall[i] = m;
    }
    for (int y = 0; y < n; y++)
    {
        cout << Tall[y] << endl;
    }
}