#include <iostream>
using namespace std;

int count_char(char *st, char c)
{
    int n=0;
    int i=0;
    while(*(st+i)!='\0')
    {
        if(*(st+i)==c)
        {
            n++;
        }
        i++;
    }
    return n;
}
main()
{
    char st[1000];

    cin >> st;

    cout << "space: " << count_char(st, ' ') << endl;
    cout << "dot: " << count_char(st, '.') << endl;
    cout << "semi: " << count_char(st, ';') << endl;
}