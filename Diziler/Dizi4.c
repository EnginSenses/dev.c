#include <stdio.h>
main()
{
    int dizi[20];
    int i,rsayi,sayi,bulundu=0;
    for (i=0;i<=19;i++)
    {
        rsayi=rand()%50;
        dizi[i]=rsayi;
    }
    for (i=0;i<=19;i++)
    {
        printf("\nRasgele Sayilerin %d.'si :%d",i+1,dizi[i]);
    }
    printf("\nSayiyi Giriniz :");
    scanf("%d",&sayi);
    for (i=0;i<=19;i++)
    {
        if (dizi[i]==sayi)
        {
            bulundu=1;
            break;
        }
    }
    if (bulundu==1)
    {
         printf("Dogru Tahmin :%d . %d. Sayiydi",dizi[i],i+1);
    }
    else
    {
        printf("Yanlis Tahmin ");
    }
}