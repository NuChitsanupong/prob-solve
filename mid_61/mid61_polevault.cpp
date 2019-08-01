<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;

int n, q;
vector<int> box[3];

int bundai(int x)
{
    int sum = 0;
    for (int i = x; i < n; i++)
    {
        sum += box[0][i];
        box[2].push_back(sum);
    }
    if (x < n)
        return bundai(x + 1);
}

int main()
{
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        box[0].push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        scanf("%d", &x);
        box[1].push_back(x);
    }
    bundai(0);
    // for (int i = 0; i < box[2].size(); i++)
    // {
    //     cout << box[2][i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < q; i++)
    {
        int set = 0;
        for (int j = 0; j < box[2].size(); j++)
        {
            if (box[1][i] == box[2][j])
            {
                set = 1;
                break;
            }
        }
        if (set == 1)
            printf("Y");
        else
            printf("N");
    }
}
=======
#include <iostream>
#include <vector>

using namespace std;

int n, q;
vector<int> box[3];

int bundai(int x)
{
    int sum = 0;
    for (int i = x; i < n; i++)
    {
        sum += box[0][i];
        box[2].push_back(sum);
    }
    if (x < n)
        return bundai(x + 1);
}

int main()
{
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        box[0].push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        scanf("%d", &x);
        box[1].push_back(x);
    }
    bundai(0);
    // for (int i = 0; i < box[2].size(); i++)
    // {
    //     cout << box[2][i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < q; i++)
    {
        int set = 0;
        for (int j = 0; j < box[2].size(); j++)
        {
            if (box[1][i] == box[2][j])
            {
                set = 1;
                break;
            }
        }
        if (set == 1)
            printf("Y");
        else
            printf("N");
    }
}
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
