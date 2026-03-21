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
 int counter=0;
 for(int i=0; i<999; i++){
    if(metin[i] == kelime[0]){
        int j=0;
        while(metin[i+j] == kelime[j] && kelime[j] != '\0'){
            j++;
        }
        if(kelime[j] == '\0'){
            counter++;
        }
    }
 }

}

 
