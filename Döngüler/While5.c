#include <stdio.h>
#include <math.h>
main()
{
    int say,kup,fakt=1,i;
    printf("Sayiyi Giriniz :");
    scanf("%d",&say);
    if (say>0)
    {
        if (say>10)
        {
            printf("Cok buyuk sayi beni ugrastirma !");
        }
        else if (say>5 && say<10)
        {
            kup=pow(say,3);
            printf("Sayinin Kupu :%d",kup);
        }
        else if (say<=5)
        {
            i=1;
            while (i<=say)
            {
                fakt=i*fakt;
                i++;
            }
            printf("%d Sayisinin Faktoriyeli : %d",say,fakt);
        } 
    }
    else
    {
        printf("Sayi Pozitif Degil !");
    }
}