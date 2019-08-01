<<<<<<< HEAD
#include <iostream>
using namespace std;

void copy_string(char *src, char *dest)
{
    int i = 0;
    int a = 0;
    while (a != 1)
    {
        if (*(src + i) == '\0')
        {
            a += 1;
        }
        *(dest + i) = *(src + i);
        i++;
    }
}
main()
{
    char st1[1000];
    char st2[1000];

    cin.getline(st1, 1000);
    copy_string(st1, st2);

    cout << st2 << endl;
=======
#include <iostream>
using namespace std;

void copy_string(char *src, char *dest)
{
    int i = 0;
    int a = 0;
    while (a != 1)
    {
        if (*(src + i) == '\0')
        {
            a += 1;
        }
        *(dest + i) = *(src + i);
        i++;
    }
}
main()
{
    char st1[1000];
    char st2[1000];

    cin.getline(st1, 1000);
    copy_string(st1, st2);

    cout << st2 << endl;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}