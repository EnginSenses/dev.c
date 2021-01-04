#include <stdio.h>
main()
{
    int randomsayi,deneme=0,tura=0;
    while (tura!=5)
    {
        
        randomsayi=rand()%2;
        if (randomsayi==0)
        {
            tura++;
            printf("Tura\n");
        }
        else
        {
            printf("Yazi\n");
        }
		deneme++;
    }
    printf("5 Tura %d denemede oldu .",deneme);
}