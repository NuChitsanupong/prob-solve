<<<<<<< HEAD
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    char code[55];
    while (true)
    {
        scanf("%s", code);
        if (strcmp(code, "#") == 0)
        {
            break;
        }
        if (next_permutation(code, code + strlen(code)))
        {
            printf("%s\n", code);
        }
        else
        {
            printf("No Successor\n");
        }
    }
    return 0;
=======
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    char code[55];
    while (true)
    {
        scanf("%s", code);
        if (strcmp(code, "#") == 0)
        {
            break;
        }
        if (next_permutation(code, code + strlen(code)))
        {
            printf("%s\n", code);
        }
        else
        {
            printf("No Successor\n");
        }
    }
    return 0;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}