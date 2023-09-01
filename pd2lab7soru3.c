#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define N 4

/*
Klavyeden girilen text bir ifadeyi okuyan ve bu text in içindeki harflerin sayysyny veren programy dinamik
bellek yönetimi kullanarak yazynyz
Örnek : “Karabük Üniversitesi” için;
2 adet “a”, 1 adet “b”….

*/
int main()
{


    char cumle[100];
    char harfler[24]={"abcdefghýijklmnoprstuvyz"};
    printf("lutfen cumle giriniz: ");
    gets(cumle);
    char *p1,*p2;
    int n=strlen(cumle);
    p1=(char *)malloc(n * sizeof(char *));
    int harfsayac[24]={0};
    int kontrol;
    int i;

    for(p1=cumle;*p1;p1++)
    {
        for(i=0;i<24;i++)
        {

            if(*p1==harfler[i])
            {
                harfsayac[i]++;
                break;
            }
        }
    }

    for(i=0;i<24;i++)
    {
        if(harfsayac[i]>0)
        {
            printf("%d kadar %c\n",harfsayac[i],harfler[i]);
        }
    }


    return 0;
}



