#include <stdio.h>
main()
{
    float ycap,cevre,alan,pi;
    pi=3.14;
    printf("Yaricapi Giriniz :");
    scanf("%f",&ycap);
    alan=pi*(ycap*ycap);
    cevre=2*pi*ycap;
    printf("\nDairenin Alani :%.2f",alan);
    printf("\nDairenin Cevresi :%.2f",cevre);
}