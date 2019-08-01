<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    int ans = 0;
    cin >> n >> m;
    vector<int> mission[n + 1];
    for (int i = 0; i < m; i++)
    {
        int ms, t;
        cin >> ms >> t;
        mission[ms - 1].push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        mission[n].push_back(500);
        for (int j = 0; j < mission[i].size(); j++)
        {
            if (mission[i][j] < mission[n][i])
            {
                mission[n][i] = mission[i][j];
            }
        }
    }
    for (int i = 0; i < mission[n].size(); i++)
    {
        ans += mission[n][i];
    }
    cout << ans << endl;
    for (int i = 0; i < mission[n].size(); i++)
    {
        cout << i+1 << " " << mission[n][i] << endl;
    }
=======
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    int ans = 0;
    cin >> n >> m;
    vector<int> mission[n + 1];
    for (int i = 0; i < m; i++)
    {
        int ms, t;
        cin >> ms >> t;
        mission[ms - 1].push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        mission[n].push_back(500);
        for (int j = 0; j < mission[i].size(); j++)
        {
            if (mission[i][j] < mission[n][i])
            {
                mission[n][i] = mission[i][j];
            }
        }
    }
    for (int i = 0; i < mission[n].size(); i++)
    {
        ans += mission[n][i];
    }
    cout << ans << endl;
    for (int i = 0; i < mission[n].size(); i++)
    {
        cout << i+1 << " " << mission[n][i] << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}