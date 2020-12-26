#include <stdio.h>
main()
{
	int kisa,uzun,cevre,alan;
	printf("Kisa Kenari giriniz :");
	scanf("%d",&kisa);
	printf("Uzun Kenari giriniz :");
	scanf("%d",&uzun);
	cevre=(kisa+uzun)*2;
	alan=kisa*uzun;
	printf("Alan :%d \nCevre:%d",alan,cevre);
}
