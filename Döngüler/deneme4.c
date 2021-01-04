#include <stdio.h>
main()
{
    int sayi,rasgelesayi,deneme=0;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    while (1)
    {
        rasgelesayi=rand();
        deneme++;
        printf("%d ",rasgelesayi);
        if (rasgelesayi == sayi)
        break;
    }
    printf("\n%d Sayisini %d denemesinde tutturdu .",sayi,deneme);
}