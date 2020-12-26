#include <stdio.h>
main()
{
    int sayi,i,adet;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    i=1;
    while (i<=sayi)
    {
        if (((i*3)+4)%5==0)
        {
            printf("\nBolunen Sayi :%d",i);
            adet++;
        }
        i++;
    }
    printf("\nAdet :%d",adet);
}