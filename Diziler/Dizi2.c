#include <stdio.h>
main()
{
    int sayilar[5];
    int i;
    for (i=0;i<=4;i++)
    {
        printf("Sayiyi Giriniz :");
        scanf("%d",&sayilar[i]);
    }
    i=0;
    for (i;i<=4;i++)
    {
        printf("\nDizinin %d. Elemani :%d",i+1,sayilar[i]);
    }
}