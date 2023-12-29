#include <stdio.h>
#include <string.h>

#define sksMtk 4
#define sksFisika 3
#define sksBiologi 2

int main()
{
    // total sks
    const int totalSks = sksMtk + sksFisika + sksBiologi;

    float nilaiMtk, nilaiFisika, nilaiBiologi;

    //String
    char numerik[4] = "AB";
    char score[] = "C";
    strcat(numerik,score);
    printf("%s,penggabungan numerik dan score\n", numerik);

    // printf("jumlah total sks andi adalah %d \n", totalSks);

    printf("Masukan nilai Matematika : ");
    scanf("%f", &nilaiMtk);

    printf("Masukan nilai Fisika : ");
    scanf("%f", &nilaiFisika);

    printf("Masukan nilai Biologi : ");
    scanf("%f", &nilaiBiologi);

    float totalNilaiMtk = nilaiMtk * sksMtk,
          totalNilaiFisika = nilaiFisika * sksFisika,
          totalNilaiBiologi = nilaiBiologi * sksBiologi;

    float nilaiRata_rata = (totalNilaiMtk + totalNilaiFisika + totalNilaiBiologi) / totalSks;

    float *ptr = &nilaiRata_rata;

    // printf("nilai mtk andi adalah %.2f\n", nilaiMtk);
    // printf("nilai fisika andi adalah %.2f\n", nilaiFisika);
    // printf("nilai biologi andi adalah %.2f\n", nilaiBiologi);

    printf("\nnilai rata rata andi : %.2f\n", nilaiRata_rata);

    if (nilaiRata_rata > 79) {
        printf("\nnilai rata rata andi : %.2f %c \n", *ptr , numerik[0]);
    } else if (nilaiRata_rata > 69) {
        printf("\nnilai rata rata andi : %.2f %c \n", *ptr , numerik[1]);
    } else {
        printf("\nnilai rata rata andi : %.2f %c \n", *ptr , numerik[2]);
    }

    return 0;
}