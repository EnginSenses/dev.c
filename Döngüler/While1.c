#include <stdio.h>
main()
{
    int sayi,i,toplam=0;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    i=1;
    while (i<=sayi)
    {
        toplam=toplam+i;
        i++;
    }
    printf("Sayilarin Toplami :%d",toplam);
}