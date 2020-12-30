#include <stdio.h>
main()
{
    int i,j,toplam=0,sayi;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    for (i=1;i<=sayi;i++)
    {
        for (j=1;j<=i;j++)
        {
            toplam++;
            printf("%4d",toplam);
        }
        printf("\n");
    } 
}
