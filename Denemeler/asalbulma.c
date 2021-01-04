#include <stdio.h>
main()
{
    int sayi,i,sayac=0;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    for (i=2;i<sayi;i++)
    {
        if (sayi%i==0)
        {
            sayac++;
        }
    }
    if (sayac==0)
    {
        printf("Sayi Asaldir !");
    }
    else
    {
        printf("Sayi Asal Degildir !");
    }
}
