#include <stdio.h>

int main()
{
    int n;

    char *so[] = {
        "khong", "mot", "hai", "ba", "bon",
        "nam", "sau", "bay", "tam", "chin"
    };

    printf("Nhap so co 3 chu so: ");
    scanf("%d", &n);

    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int donvi = n % 10;

    printf("%s tram ", so[tram]);

    if(chuc == 0)
    {
        printf("le ");
    }
    else
    {
        printf("%s muoi ", so[chuc]);
    }

    printf("%s", so[donvi]);

    return 0;
}
