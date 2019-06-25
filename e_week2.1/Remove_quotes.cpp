#include <iostream>
using namespace std;

void remove_quotes(char *src, char *dest)
{
    int i = 0;
    int n = 0;
    int a = 0;
    while (a != 1)
    {
        if (*(src + i) == '\0')
        {
            a += 1;
        }
        if (*(src + i) != '\'' && *(src + i) != '\"')
        {
            *(dest + n) = *(src + i);
            n++;
        }
        i++;
    }
}
main()
{
    char st[1000];
    char out[1000];
    int l;

    cin.getline(st, 1000);
    remove_quotes(st, out);

    cout << out << endl;
}