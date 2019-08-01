<<<<<<< HEAD
#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
    int n;
    int target[1000];
    int i;

    while (true)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        while (true)
        {
            scanf("%d", &target[0]);
            if (target[0] == 0)
            {
                printf("\n");
                break;
            }
            for (i = 1; i < n; i++)
            {
                scanf("%d", &target[i]);
            }

            int currCoach = 1;
            int targetIndex = 0;
            stack<int> station;
            while (currCoach <= n)
            {
                station.push(currCoach);

                while (!station.empty() && station.top() == target[targetIndex])
                {
                    station.pop();
                    targetIndex++;
                    if (targetIndex >= n)
                    {
                        break;
                    }
                }

                currCoach++;
            }

            if (station.empty())
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
=======
#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
    int n;
    int target[1000];
    int i;

    while (true)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        while (true)
        {
            scanf("%d", &target[0]);
            if (target[0] == 0)
            {
                printf("\n");
                break;
            }
            for (i = 1; i < n; i++)
            {
                scanf("%d", &target[i]);
            }

            int currCoach = 1;
            int targetIndex = 0;
            stack<int> station;
            while (currCoach <= n)
            {
                station.push(currCoach);

                while (!station.empty() && station.top() == target[targetIndex])
                {
                    station.pop();
                    targetIndex++;
                    if (targetIndex >= n)
                    {
                        break;
                    }
                }

                currCoach++;
            }

            if (station.empty())
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}