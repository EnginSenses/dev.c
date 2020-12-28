#include <stdio.h>
main()
{
    int say1,say2,i,buyuk,kucuk,cifttop=0,ciftsay=0,tektop=0,teksay=0;
    printf("1.Sayiyi Giriniz :");
    scanf("%d",&say1);
    printf("2.Sayiyi Giriniz :");
    scanf("%d",&say2);
    if (say1>say2)
    {
        buyuk=say1;
        kucuk=say2;
    }
    else
    {
        buyuk=say2;
        kucuk=say1;
    }
    i=kucuk;
    while (i<=buyuk)
    {
        if (i%2==0)
        {
            cifttop=i+cifttop;
            ciftsay++;
        }
        else
        {
            tektop=i+tektop;
            teksay++;
        }
        i++;
    }
    printf("Cift Sayilerin Toplami :%d\n",cifttop);
    printf("cift Sayilerin Sayisi :%d\n",ciftsay);
    printf("Tek Sayilerin Toplami :%d\n",tektop);
    printf("Tek Sayilerin Sayisi :%d\n",teksay);
}
