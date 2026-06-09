#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char x;

    int dem = 0;

    printf("Nhap chuoi: ");
    gets(s);

    printf("Nhap ky tu can tim: ");
    scanf("%c", &x);

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == x)
        {
            dem++;
        }
    }

    printf("So lan xuat hien: %d", dem);

    return 0;
}
