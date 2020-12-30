#include <stdio.h>
main()
{
    int i,j,carpim,sayi;
    printf("Sayiyi Giriniz :");
    scanf("%d",&sayi);
    for (i=1;i<=sayi;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
