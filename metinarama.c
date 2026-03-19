#include <stdio.h>
int main(){
    FILE *dosya;
    char metin[999];
    
       char kelime[20];
    printf("kelime giriniz: ");
    scanf("%s", kelime);


    char dosyaadi[20];
    printf("dosya adi giriniz: ");
    scanf("%s", dosyaadi);
    
    dosya = fopen(dosyaadi, "r");
    if (dosya == NULL)
    {
        printf("dosya acilamadi!\n");
        return 1;
    }
 

}

 