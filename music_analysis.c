#include <stdio.h>
#include <string.h>

#define TUR_SAYISI 5
#define ISIM_UZUNLUK 20
#define KISI_SAYISI 9

int main() {
    char turler[TUR_SAYISI][ISIM_UZUNLUK] = {
        "Klasik", "Rock", "Pop", "Arabesk", "Rap"
    };

    int toplamSureler[TUR_SAYISI] = {0};
    char isimler [][ISIM_UZUNLUK] = {
        "Erhan" , "Ali Taha" , "Arif" , "Bilal" , "Eren" , "Gökhan" , "Mansur" , "Bilal" , "Ayşegül"
    };

    int dinlenmeSureleri[KISI_SAYISI][TUR_SAYISI] = {
        {50, 100, 30, 200, 30},
        {70, 90, 80, 90, 25},
        {150, 70, 150, 20, 70},
        {30, 150, 90, 70, 80},
        {10, 90, 150, 80, 150},
        {50, 200, 20, 60, 10},
        {100, 100, 100, 100, 100},
        {50, 70, 200, 0, 10},
        {70, 80, 120, 110, 40}
    };

    for (int i = 0; i < KISI_SAYISI; i++) {
        for (int j = 0; j < TUR_SAYISI; j++) {
            toplamSureler[j] += dinlenmeSureleri[i][j];
        }
    }

    int en_cok_dinlenen = 0, en_az_dinlenen = 0;
    for (int i = 1; i < TUR_SAYISI; i++) {
        if (toplamSureler[i] > toplamSureler[en_cok_dinlenen]) {
            en_cok_dinlenen = i;
        }
        if (toplamSureler[i] < toplamSureler[en_az_dinlenen]) {
            en_az_dinlenen = i;
        }
    }

    printf("Açılan müzik türü: %s\n", turler[en_cok_dinlenen]);
    printf("En az dinlenen müzik türü: %s\n", turler[en_az_dinlenen]);

     printf("\n Müzik türleri ve dinlenme süreleri siralamasi:\n");
    for (int i = 0; i < TUR_SAYISI; i++) {
        printf("%s: %d dakika\n", turler[i], toplamSureler[i]);
    }

    return 0;
}
