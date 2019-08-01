<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;
vector<string> doc;

int main()
{
    int n;
    string word;
    int c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char com;
        cin >> com;
        if (com == 'i')
        {
            cin >> word;
            doc.insert(doc.begin() + c, word);
            c++;
        }
        else if (com == 'l')
        {
            if (c > 0)
            {
                c--;
            }
        }
        else if (com == 'r')
        {
            if (c < doc.size())
            {
                c++;
            }
        }
        else if (com == 'b')
        {
            if (c > 0)
            {
                doc.erase(doc.begin() + c - 1);
                c--;
            }
        }
        else if (com == 'd')
        {
            if (c < doc.size())
            {
                doc.erase(doc.begin() + c);
            }
        }
    }
    for (int i = 0; i < doc.size(); i++)
    {
        cout << doc[i] << " ";
    }
=======
#include <iostream>
#include <vector>

using namespace std;
vector<string> doc;

int main()
{
    int n;
    string word;
    int c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char com;
        cin >> com;
        if (com == 'i')
        {
            cin >> word;
            doc.insert(doc.begin() + c, word);
            c++;
        }
        else if (com == 'l')
        {
            if (c > 0)
            {
                c--;
            }
        }
        else if (com == 'r')
        {
            if (c < doc.size())
            {
                c++;
            }
        }
        else if (com == 'b')
        {
            if (c > 0)
            {
                doc.erase(doc.begin() + c - 1);
                c--;
            }
        }
        else if (com == 'd')
        {
            if (c < doc.size())
            {
                doc.erase(doc.begin() + c);
            }
        }
    }
    for (int i = 0; i < doc.size(); i++)
    {
        cout << doc[i] << " ";
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}