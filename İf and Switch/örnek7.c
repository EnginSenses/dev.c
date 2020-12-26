#include <stdio.h>
main()
{
    int sayi1,sayi2,secim,islem;
    printf("1.Sayiyi Giriniz :");
    scanf("%d",&sayi1);
    printf("2.Sayiyi Giriniz :");
    scanf("%d",&sayi2);
    printf("Islem seciniz :\n1-Toplam\n2-Cikartma\n3-Carpma\n4-Bolme\nSecimiz :");
    scanf("%d",&secim);
    if (secim == 1)
    {
        islem=sayi1+sayi2;
        printf("Islem Sonucu :%d",islem);
    }
    else if (secim==2)
    {
        if (sayi1>sayi2)
        {
            islem=sayi1-sayi2;
            printf("Islem Sonucu :%d",islem);
        }
        else
        {
            islem=sayi2-sayi1;
            printf("Islem Sonucu :%d",islem);
        }  
    }
    else if (secim==3)
    {
        islem=sayi1*sayi2;
        printf("Islem Sonucu :%d",islem);
    }
    else if (secim==4)
    {
        if (sayi1>sayi2)
        {
            islem=sayi1/sayi2;
            printf("Islem Sonucu :%d",islem);
        }
        else
        {
            islem=sayi2/sayi1;
            printf("Islem Sonucu :%d",islem);
        }
    }
    else
    /*if (secim<0&&secim>5)*/
    {
        printf("Yanlis Islem Sectiniz");
    }
}