<<<<<<< HEAD
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<char> s;
    string paren[n];
    for (int i = 0; i < n; i++)
    {
        cin >> paren[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < paren[i].length(); j++)
        {
            if (s.size() != 0)
            {
                if (s.top() == '(' && paren[i][j] == ')')
                {
                    s.pop();
                }
                else if (s.top() == '[' && paren[i][j] == ']')
                {
                    s.pop();
                }
                else if (s.top() == '{' && paren[i][j] == '}')
                {
                    s.pop();
                }
                else
                {
                    s.push(paren[i][j]);
                }
            }
            else
            {
                s.push(paren[i][j]);
            }
        }
        if (s.size() == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
            while (s.size() != 0)
            {
                s.pop();
            }
        }
    }
=======
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<char> s;
    string paren[n];
    for (int i = 0; i < n; i++)
    {
        cin >> paren[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < paren[i].length(); j++)
        {
            if (s.size() != 0)
            {
                if (s.top() == '(' && paren[i][j] == ')')
                {
                    s.pop();
                }
                else if (s.top() == '[' && paren[i][j] == ']')
                {
                    s.pop();
                }
                else if (s.top() == '{' && paren[i][j] == '}')
                {
                    s.pop();
                }
                else
                {
                    s.push(paren[i][j]);
                }
            }
            else
            {
                s.push(paren[i][j]);
            }
        }
        if (s.size() == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
            while (s.size() != 0)
            {
                s.pop();
            }
        }
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}