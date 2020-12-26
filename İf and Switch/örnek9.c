#include <stdio.h>
main()
{
    char secim;
    int kenar,yari,islem1,islem2,secim2,ycapi;
    const int pi =3.14;
    printf("Kare Secmek icin A Yuvarlak secmek icin B Giriniz :");
    scanf("%c",&secim);
    switch(secim)
    {
    case 'a': 
    case 'A':
    printf("Islem seciniz :\n1-Alan\n2-Cevre\nSeciminiz :");
    scanf("%d",&secim2);
    printf("Kenar Uzunlugu :");
    scanf("%d",&kenar);
    if (secim2==1)
    {
        islem1=kenar*kenar;
        printf("Karenin Alani :%d",islem1);
    }
    else if(secim2==2)
    {
        islem1=(kenar+kenar)*2;
        printf("Karenin Cevresi :%d",islem1);
    }
    else
    {
        printf("Yanlis Secim Yaptınız !");
    }
    break;
    case 'b':
    case 'B':
    printf("Islem seciniz :\n1-Alan\n2-Cevre\nSeciminiz :");
    scanf("%d",&secim2);
    printf("Yaricapi : ");
    scanf("%d",&ycapi);
    if (secim2==1)
    {
        islem2=pi*(ycapi*ycapi);
        printf("Yuvarlagin Alani :%d",islem2);
    }
    else if (secim2==2)
    {
        islem2=2*pi*ycapi;
        printf("Yuvarlagin Cevresi :%d",islem2);
    }
    else
    {
        printf("Yanlis Secim Yaptınız !");
    }
    break;    
    }
}