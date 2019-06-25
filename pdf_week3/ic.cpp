#include <iostream>
#include <stdio.h>
#include <list>

using namespace std;
list<int> ll;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string c;
        int num;
        cin >> c;
        if (c == "li")
        {
            cin >> num;
            ll.push_front(num);
        }
        else if (c == "ri")
        {
            cin >> num;
            ll.push_back(num);
        }
        else if (c == "lr")
        {
            int tmp = ll.front();
            ll.push_back(tmp);
            ll.pop_front();
        }
        else if (c == "rr")
        {
            int tmp = ll.back();
            ll.push_front(tmp);
            ll.pop_back();
        }
    }

    for (list<int>::iterator it = ll.begin(); it != ll.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}