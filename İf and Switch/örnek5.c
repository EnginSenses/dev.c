#include <stdio.h>
main()
{
    int vize,final,ortalama,but;
    printf("Vize notunuzu giriniz :");
    scanf("%d",&vize);
    printf("Final notunuzu giriniz :");
    scanf("%d",&final);
    ortalama= (final*0.6)+(vize*0.4);
    if (ortalama>59)
    {
        printf("Gectiniz ! Notunuz :%d",ortalama);
    }
    else
    {
        printf("Kaldiniz ! Notunuz :%d\n",ortalama);
        printf("Butunleme notunuzu giriniz :");
        scanf("%d",&but);
        ortalama=(but*0.6)+(vize*0.4);
        if(ortalama>59)
        {
            printf("Gectiniz ! Notunuz :%d",ortalama);
        }
        else
        {
            printf("Kaldiniz ! Notunuz :%d",ortalama);
        }
        
    }

}
