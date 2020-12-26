#include <stdio.h>
main()
{
    int sayi;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    if(sayi<100)
    {
        printf("Girdiginiz Sayi 100'den Kucuk !");
    }
    else if(sayi>100)
    {
        printf("Girdiginiz Sayi 100'den Buyuk !");
    }
    else
    {
        printf("Girdiginiz Sayi 100'e Esit !");
    }
}