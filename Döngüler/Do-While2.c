#include <stdio.h>
main()
{
    int sayi1,sayi2;
    char secim;
    do
    {
        printf("1.Sayiyi Giriniz :");
        scanf("%d",&sayi1);
        printf("2.Sayiyi Giriniz :");
        scanf("%d",&sayi2);
        printf("%d + %d = %d\n",sayi1,sayi2,sayi1+sayi2);
        printf("Tekrar islem yapmak ister misiniz ?");
        do
        {
           scanf("%c",&secim); 
        } while (secim=='\n');
        printf("\n");
        
    } while (secim == 'e' || secim == 'E');
}