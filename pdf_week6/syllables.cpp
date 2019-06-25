#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        int m = 0;
        string word;
        cin >> word;
        for (int j = 0; j < word.size(); j++)
        {
            if (c == 0)
            {
                if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u')
                {
                    m++;
                    c = 1;
                }
            }
            else if (c == 1)
            {
                if (word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u')
                {
                    c = 0;
                }
            }
        }
        cout << m << endl;
    }
}