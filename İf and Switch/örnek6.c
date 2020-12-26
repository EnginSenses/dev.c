#include <stdio.h>
main()
{
    int vize,final,ortalama;
    printf("Vize Notunuzu Giriniz :");
    scanf("%d",&vize);
    printf("Final Notunuzu Giriniz :");
    scanf("%d",&final);
    ortalama=(vize*0.4)+(final*0.6);
    if (ortalama>0 &&ortalama<=40)
    {
        printf("Notunuz :%d. Harf Notunuz :FF",ortalama);
    }
    else if (ortalama<45)
    {
        printf("Notunuz :%d. Harf Notunuz :DD",ortalama);
    }
    else if (ortalama<50)
    {
        printf("Notunuz :%d. Harf Notunuz :DC",ortalama);
    }
    else if (ortalama<55)
    {
        printf("Notunuz :%d. Harf Notunuz :CC",ortalama);
    }
    else if (ortalama<60)
    {
        printf("Notunuz :%d. Harf Notunuz :CB",ortalama);
    }
    else if (ortalama<70)
    {
        printf("Notunuz :%d. Harf Notunuz :BB",ortalama);
    }
    else if (ortalama<80)
    {
        printf("Notunuz :%d. Harf Notunuz :BA",ortalama);
    }
    else if (ortalama<=100)
    {
        printf("Notunuz :%d. Harf Notunuz :AA",ortalama);
    }
    else
    {
        printf("Hatalı Not Girdiniz !");
    }
    
}