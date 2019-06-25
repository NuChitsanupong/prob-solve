#include <iostream>
using namespace std;

char *write_chars(char *dest, const char *st)
{
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
            *(dest + n) = '&';
            *(dest + n+1) = 'l';
            *(dest + n+2) = 't';
            *(dest + n+3) = ';';
            n+=4;
        }
        else if(*(src + i) == '>')
        {
            *(dest + n) = '&';
            *(dest + n+1) = 'g';
            *(dest + n+2) = 't';
            *(dest + n+3) = ';';
            n+=4;
        }
        else if(*(src + i) == '\"')
        {
            *(dest + n) = '&';
            *(dest + n+1) = 'q';
            *(dest + n+2) = 'u';
            *(dest + n+3) = 'o';
            *(dest + n+4) = 't';
            *(dest + n+5) = ';';
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