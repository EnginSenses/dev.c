#include <stdio.h>
main()
{
    int i,j,carpim;
    for (i=1;i<=10;i++)
    {
        for (j=1;j<=10;j++)
        {
            carpim=i*j;
            printf("%4d",carpim);
        }
        printf("\n");
    }
    
}
