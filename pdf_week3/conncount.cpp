#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> vertex[100000];
int com[100000] = {0};
int cc = 0;
stack<int> mystack;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        vertex[y - 1].push_back(x-1);
        vertex[x - 1].push_back(y-1);
    }
    for (int i = 0; i < n; i++)
    {
        if (com[i] > 0)
        {
            continue;
        }
        cc++;
        mystack.push(i);
        com[i] = cc;
        while (mystack.empty() == false)
        {
            int v;
            v = mystack.top();
            mystack.pop();
            for (int u = 0; u < vertex[v].size(); u++)
            {
                if (com[vertex[v][u]] > 0)
                {
                    continue;
                }
                mystack.push(vertex[v][u]);
                com[vertex[v][u]] = cc;
            }
        }
    }
    cout << cc;
    return 0;
}