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
    
}
