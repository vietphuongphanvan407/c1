#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Nhap ho ten: ");
    gets(s);

    char temp[100];
    int j = 0;
    int dem = 0;

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

            dem++;

            if(dem == 1)
            {
                printf("Ho: %s\n", temp);
            }
            else if(dem == 2)
            {
                printf("Ten lot: %s\n", temp);
            }
            else
            {
                printf("Ten: %s\n", temp);
            }
            j = 0;
        }
    }

    return 0;
}
