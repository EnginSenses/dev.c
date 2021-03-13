#include <stdio.h>
main()
{
    int sayilar[10];
    int i,toplam=0;
    for (i=0;i<=9;i++)
    {
        sayilar[i]=rand()%50;        
    }
    for (i=0;i<=9;i++)
    {
        printf("\nDizinin %d. Elemani :%d",i+1,sayilar[i]);
    }
    for (i=0;i<=9;i++)
    {
        toplam=toplam+sayilar[i];
    }
    printf("\nSayilarin Toplami :%d",toplam);
}