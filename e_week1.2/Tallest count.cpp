<<<<<<< HEAD
#include <iostream>
using namespace std;

main()
{
    int height[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int max_height = height[0];
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (height[i] > max_height)
        {
            max_height = height[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (height[i] == max_height)
        {
            max_count++;
        }
    }
    cout << max_count << endl;
=======
#include <iostream>
using namespace std;

main()
{
    int height[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int max_height = height[0];
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (height[i] > max_height)
        {
            max_height = height[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (height[i] == max_height)
        {
            max_count++;
        }
    }
    cout << max_count << endl;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}