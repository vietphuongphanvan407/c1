#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char temp[100];

    int j = 0;

    printf("Nhap chuoi: ");
    gets(s);

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] != ' ')
        {
            temp[j] = s[i];
            j++;
        }
    }

    temp[j] = '\0';

    printf("Chuoi sau khi xoa khoang trang: %s", temp);

    return 0;
}
