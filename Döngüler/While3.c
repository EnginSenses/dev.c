#include <stdio.h>
main()
{
    int i,number,top=0;
    i=1;
    while (i<=10)
    {
        printf("Sayiyi Giriniz :");
        scanf("%d",&number);
        top=number+top;
        number=0;
        i++;
    }
    printf("Sonuc :%d",top);
}