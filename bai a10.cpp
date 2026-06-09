#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    gets(s);

    char temp[100];
    int j = 0;

    for(int i = 0; i <= strlen(s); i++)
    {
        if(s[i] != ' ' && s[i] != '\0')
        {
            temp[j] = s[i];
            j++;
        }
        else
        {
            temp[j] = '\0';

            printf("%s\n", temp);

            j = 0;
        }
    }

    return 0;
}
