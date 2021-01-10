#include <stdio.h>
main()
{
    int dizi[10];
    int i,enb,enk;
    for (i=0;i<=9;i++)
    {
        printf("%d.Sayiyi Giriniz :",i+1);
        scanf("%d",&dizi[i]);
    }
    enb=dizi[0];
    enk=dizi[0];
    for (i=0;i<=9;i++)
    {
        if (dizi[i]>enb)
        {
            enb=dizi[i];
        }
        else if (dizi[i]<enk)
        {
            enk=dizi[i];
        }
    }
    printf("\nEn Buyuk :%d",enb);
    printf("\nEn Kucuk :%d",enk);
}