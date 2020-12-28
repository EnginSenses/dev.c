#include <stdio.h>
#include <math.h>
main()
{
    int sayi,fakt,kup,i;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    if (sayi<=0)
    {
        printf("Pozitif Sayi Giriniz !");
    }
    else if (sayi>10)
    {
        printf("Cok Buyuk Sayi Beni Ugrastirma !");
    }
    else if (sayi>=5)
    {
        kup=pow(sayi,3);
        printf("Sayinin Kupu :%d",kup);
    }
    else if (sayi<5)
    {
        i=1;
        while (i<=sayi)
        {
            fakt=fakt*i;
            i++;
        }
        printf("Sayinin Faktoriyeli :%d",fakt);
    }
}