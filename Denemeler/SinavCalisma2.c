#include <stdio.h>
main()
{
    int x,y,z,enk;
    printf("1.Sayiyi Giriniz :");
    scanf("%d",&x);
    printf("2.Sayiyi Giriniz :");
    scanf("%d",&y);
    printf("3.Sayiyi Giriniz :");
    scanf("%d",&z);
    if (x<y)
    {
        enk=x;
    }
    else 
    {
        enk=y;
    }
    if (z<enk)
    {
        enk=z;
    }
    printf("En Kucuk Sayi :%d",enk);
}