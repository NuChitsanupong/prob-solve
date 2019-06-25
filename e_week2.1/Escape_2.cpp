#include <iostream>
using namespace std;

char *write_chars(char *dest, const char *st)
{
    int i = 0;
    int a = 0;
    while (a != 1)
    {
        if (*(st + i) == '\0')
        {
            a += 1;
        }
        *(dest + i) = *(st + i);
        i++;
    }
    return dest;
}
void escape(char *src, char *dest)
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
        if (*(src + i) != '<' && *(src + i) != '>' && *(src + i) != '\"')
        {
            *(dest + n) = *(src + i);
            n++;
        }
        else if(*(src + i) == '<')
        {
            write_chars(dest + n,"&lt;");
            n+=4;
        }
        else if(*(src + i) == '>')
        {
            write_chars(dest + n,"&gt;");
            n+=4;
        }
        else if(*(src + i) == '\"')
        {
            write_chars(dest + n,"&quot;");
            n+=6;
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
    escape(st, out);

    cout << out << endl;
}