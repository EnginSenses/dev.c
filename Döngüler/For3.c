#include <stdio.h>
main()
{
    int sayi,i,sayac=0,bolundugu;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    for (i=2;i<sayi;i++)
    {
        if (sayi%i==0)
        {
            sayac++;
            bolundugu=i;
            break;
        }
    }
    if (sayac==0)
    {
        printf("Sayi Asaldir !");
    }
    else
    {
        printf("Sayi Asal Degildir !\n");
        printf("Bolundugu Sayi :%d",bolundugu);
    }
    
}
