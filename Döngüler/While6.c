#include <stdio.h>
main()
{
    int sayi,poztop=0,pozsay=0,negtop=0,negsay=0;
    while (1)
    {
        printf("Sayiyi Girin :");
        scanf("%d",&sayi);
        if (sayi==0) break;
        if (sayi>0)
        {
            poztop=sayi+poztop;
            pozsay++;
        }
        else
        {
            negtop=sayi+negtop;
            negsay++;
        }
    }
    printf("Pozitif Toplam :%d\n",poztop);
    printf("Pozitif Adet :%d\n",pozsay);
    printf("Negatif Toplam :%d\n",negtop);
    printf("Negatif Adet :%d\n",negsay);
}