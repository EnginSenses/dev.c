#include <stdio.h>
main()
{
    int dizi[4];
    int i,j,sayi,gecici;
    for (i=0;i<=3;i++)
    {
        printf("%d.Sayiyi Giriniz :",i+1);
        scanf("%d",&dizi[i]);
    }
    for (i=0;i<=3;i++)
    {
        printf("\nSiranin %d. Elemani :%d",i+1,dizi[i]);
    }
    for (i=0;i<=3;i++)
    {
        for (j=i+1;j<=3;j++)
        {
            if (dizi[i]<dizi[j])
            {
               gecici=dizi[i];
               dizi[i]=dizi[j];
               dizi[j]=gecici;
            } 
        }
    }
    printf("\n-- Dizinin Siralanmis Hali --");
    for (i=0;i<=3;i++)
    {
        printf("\n%d.Sayi :%d",i+1,dizi[i]);
    }
}