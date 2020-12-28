#include <stdio.h>
main()
{
    int sayi,basamak,adet;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    printf("Sayinin Tersi :");
    while (sayi>=10)
    {
        basamak=sayi%10;
        printf("%d",basamak);
        sayi=sayi/10;
        adet++;
    }
    printf("%d",sayi);
    printf("\nBasamak Sayisi :%d",adet+1);
}