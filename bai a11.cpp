#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    int kitu = 0;
    int tu = 1;

    gets(s);

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] != ' ')
        {
            kitu++;
        }
        if(s[i] == ' ')
        {
            tu++;
        }
    }

    printf("So ky tu: %d\n", kitu);
    printf("So tu: %d", tu);

    return 0;
}
