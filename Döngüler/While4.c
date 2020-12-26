#include <stdio.h>
main()
{
    int say1,say2,i,cifttop=0,tektop=0,ciftsay=0,teksay=0,buyuk,kucuk;
    printf("1.Sayiyi Giriniz :");
    scanf("%d",&say1);
    printf("2.Sayiyi Giriniz :");
    scanf("%d",&say2);
    if(say1>say2)
    {
        buyuk =say1;
        kucuk =say2;
    }
    else
    {
        buyuk =say2;
        kucuk =say1;
    }
    i=kucuk;
    while (i<=buyuk)
    {
        if(i%2==0)
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
    printf("Cift Toplam :%d\n",cifttop);
    printf("Cift Adet :%d\n",ciftsay);
    printf("Tek Toplam :%d\n",tektop);
    printf("Tek Adet :%d\n",teksay);
}