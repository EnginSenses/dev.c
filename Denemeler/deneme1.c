#include <stdio.h>
main()
{
    int sayi,enk,enb,adet=1;
    while (1)
    {
        printf("Sayiyi Giriniz :");
        scanf("%d",&sayi);
        if (sayi==0) break;
        if(adet==1)
        {
            enb=sayi;
            enk=sayi;
        }
        if (sayi>enb)
        {
            enb=sayi;
        }
        else if(sayi<enk)
        {
            enk=sayi;
        }
        adet++;
    }
    printf("\nEn Buyuk Sayi :%d",enb);
    printf("\nEn Kucuk Sayi :%d",enk);
}