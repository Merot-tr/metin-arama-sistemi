#include <stdio.h>
#include <ctype.h> // tolower()

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
    fgets(metin, sizeof(metin), dosya);
    fclose(dosya);
 int counter=0;
 for(int i=0; i<999; i++){
    if(tolower(metin[i]) == tolower(kelime[0])){
        int j=0;
        while(metin[i+j] == kelime[j] && kelime[j] != '\0'){
            j++;
        }
        if(kelime[j] == '\0'){
            counter++;
        }
    }
 }
 printf("kelime %d kez bulundu.\n", counter);
    printf("Sonucu kaydetmek istediginiz dosya adini giriniz (orn: sonuc.txt): ");
    scanf("%s", ciktiAdi);

    ciktiDosyasi = fopen(ciktiAdi, "w"); // "w" modu dosyayı yazmak için
    if (ciktiDosyasi == NULL) {
        printf("Cikti dosyasi olusturulamadi!\n");
        return 1;
    }

    fprintf(ciktiDosyasi, "Aranan Kelime: %s\n", kelime);
    fprintf(ciktiDosyasi, "Bulunma Sayisi: %d\n", counter);
    
    fclose(ciktiDosyasi);
    printf("Sonuclar '%s' dosyasina basariyla kaydedildi.\n", ciktiAdi);
    return 0;
}

 
