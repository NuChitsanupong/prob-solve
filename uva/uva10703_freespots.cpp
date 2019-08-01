<<<<<<< HEAD
#include <stdio.h>

using namespace std;

bool yet[505][505];

int main()
{
    int W, H, N;
    while (scanf("%d %d %d", &W, &H, &N), W)
    {
        while (N--)
        {
            int X1, Y1, X2, Y2;
            scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
            if (X1 > X2)
            {
                int tmp = X1;
                X1 = X2;
                X2 = tmp;
            }
            if (Y1 > Y2)
            {
                int tmp = Y1;
                Y1 = Y2;
                Y2 = tmp;
            }
            for (int y = Y1 - 1; y < Y2; ++y)
            {
                for (int x = X1 - 1; x < X2; ++x)
                {
                    yet[y][x] = true;
                }
            }
        }
        int c = 0;
        for (int y = 0; y < H; ++y)
        {
            for (int x = 0; x < W; ++x)
            {
                if (!yet[y][x])
                {
                    ++c;
                }
                else
                {
                    yet[y][x] = false;
                }
            }
        }
        if (c == 0)
        {
            printf("There is no empty spots.\n");
        }
        else if (c == 1)
        {
            printf("There is one empty spot.\n");
        }
        else
        {
            printf("There are %d empty spots.\n", c);
        }
    }
=======
#include <stdio.h>

using namespace std;

bool yet[505][505];

int main()
{
    int W, H, N;
    while (scanf("%d %d %d", &W, &H, &N), W)
    {
        while (N--)
        {
            int X1, Y1, X2, Y2;
            scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
            if (X1 > X2)
            {
                int tmp = X1;
                X1 = X2;
                X2 = tmp;
            }
            if (Y1 > Y2)
            {
                int tmp = Y1;
                Y1 = Y2;
                Y2 = tmp;
            }
            for (int y = Y1 - 1; y < Y2; ++y)
            {
                for (int x = X1 - 1; x < X2; ++x)
                {
                    yet[y][x] = true;
                }
            }
        }
        int c = 0;
        for (int y = 0; y < H; ++y)
        {
            for (int x = 0; x < W; ++x)
            {
                if (!yet[y][x])
                {
                    ++c;
                }
                else
                {
                    yet[y][x] = false;
                }
            }
        }
        if (c == 0)
        {
            printf("There is no empty spots.\n");
        }
        else if (c == 1)
        {
            printf("There is one empty spot.\n");
        }
        else
        {
            printf("There are %d empty spots.\n", c);
        }
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}