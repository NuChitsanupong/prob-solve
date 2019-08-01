#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int MAX_NODE;

int BS(int node, int balls)
{
    int left = node * 2, right = left + 1;
    if (left < MAX_NODE && right < MAX_NODE)
    {
        if (balls % 2 == 0)
            BS(right, balls / 2);
        else
            BS(left, balls / 2 + 1);
    }
    else
        return node;
}

int main()
{
    int T, D, I;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &D, &I);
        MAX_NODE = pow(2.0, D);
        printf("%d\n", BS(1, I));
    }
    return 0;
}