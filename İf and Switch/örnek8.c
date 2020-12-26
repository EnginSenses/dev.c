#include <stdio.h>
main()
{
    int sayi1,sayi2,secim,islem;
    printf("1.Sayiyi Giriniz :");
    scanf("%d",&sayi1);
    printf("2.Sayiyi Giriniz :");
    scanf("%d",&sayi2);
    printf("Islem Seciniz :\n1-Toplama\n2-Cıkartma\n3-Carpma\n4-Bolme\nSeciminiz :");
    scanf("%d",&secim);
    switch(secim)
    {
        case 1: islem=sayi1+sayi2;
        printf("%d + %d = %d Islem Sonucunuz !",sayi1,sayi2,islem);
        break;
        case 2: islem=sayi1-sayi2;
        printf("%d - %d = %d Islem Sonucunuz !",sayi1,sayi2,islem);
        break;
        case 3: islem=sayi1*sayi2;
        printf("%d * %d = %d Islem Sonucunuz !",sayi1,sayi2,islem);
        break;
        case 4: islem=sayi1/sayi2;
        printf("%d / %d = %d Islem Sonucunuz !",sayi1,sayi2,islem);
        break;
        
        default :printf("Hatali Secim Yaptiniz !");
    }
}