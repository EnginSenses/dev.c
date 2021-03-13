#include <stdio.h>
main()
{
    int toplam=0,sayi,i;
    for (i=1;i<=1000;i++)
    {
        printf("\n%d. Sayiyi Giriniz :",i);
        scanf("%d",&sayi);
        if (sayi%2==0)
        {
            printf("\nCift Sayi : %d",sayi);
        }
        else
        {
            break;
        }
    }
    printf("Girilen Sayilarin Sayisi :%d",i);
}
