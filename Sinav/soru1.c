#include <stdio.h>
main()
{
    int x,y,z;
    printf("1.Sayiyi Giriniz :");
    scanf("%d",&x);
    printf("2.Sayiyi Giriniz :");
    scanf("%d",&y);
    printf("3.Sayiyi Giriniz :");
    scanf("%d",&z);
    if (x<y)
    {
        if (x<z)
        {
            printf("En Kucuk Sayi :%d",x);
        }  
    }
    if (y<x) 
    {
        if(y<z)
        {
        printf("En Kucuk Sayi :%d",y);
        }
    }
    if (z<x)
    {
        if (z<y)
        {
        printf("En Kucuk Sayi :%d",z);    
        }
    }
}
