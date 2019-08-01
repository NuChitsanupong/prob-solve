#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    vector<char> ss;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char x = s[i];
        ss.push_back(x);
    }
    int j = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[j])
        {
            j += 1;
        }
        if (j == s.size())
        {
            j = 0;
            sum += 1;
        }
    }

    cout << sum << endl;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << ss[i] << endl;
    // }
}