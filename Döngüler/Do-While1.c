#include <stdio.h>
main()
{
    char kr;
    int bosluk=0;
    printf("Cumleyi Yaziniz :");
    do
    {
        scanf("%c",&kr);
        if (kr==' ')
        {
            bosluk++;
        }
    } 
    while (kr!='\n');
    {
        printf("Kelime Sayiyi :%d",bosluk+1);
    }
}