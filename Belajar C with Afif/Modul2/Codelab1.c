#include <stdio.h>
// Codelab1 modul 2
int main()
{
    float sapiJantan1, sapiJantan2, sapiBetina1, sapiBetina2;
    const float kambingJantan1 = 120, kambingJantan2 = 85.8, kambingBetina1 = 23;
    // const karena nilai tidak perlu berubah-ubah

    printf("Masukan Berat Sapi 1 = ");
    scanf("%f", &sapiJantan1);

    printf("Masukan Berat Sapi 2 = ");
    scanf("%f", &sapiJantan2);

    printf("Masukan Berat Sapi 3 = ");
    scanf("%f", &sapiBetina1);

    printf("Masukan Berat Sapi 4 = ");
    scanf("%f", &sapiBetina2);

    float totalBeratSapi = sapiJantan1 + sapiJantan2 + sapiBetina1 + sapiBetina2;
    float totalBeratKambing = kambingJantan1 + kambingJantan2 + kambingBetina1;

    printf("\nHasil Berat Sapi : %.2f\n", totalBeratSapi);
    printf("Hasil Berat Kambing : %.2f\n", totalBeratKambing);
}