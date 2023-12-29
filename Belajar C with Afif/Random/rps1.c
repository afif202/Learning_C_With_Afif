#include <stdio.h>

int main()
{
    float hadir, tugas, ujian, nilai_akhir;
    printf("Masukkan nilai kehadiran = ");
    scanf("%f", &hadir);
    printf("Masukkan nilai tugas = ");
    scanf("%f", &tugas);
    printf("Masukkan nilai ujian = ");
    scanf("%f", &ujian);
    // nilai_akhir = ((15.0 / 100) * hadir) + ((55.0 / 100) * tugas) + ((30.0 / 100) * ujian);
    nilai_akhir = (0.15 * hadir) + (0.55 * tugas) + (0.30 * ujian);
    printf("nilai akhir manis:%f", nilai_akhir);
    if (nilai_akhir >= 80)
        printf("Nilai akhir = A");
    else if (nilai_akhir >= 65)
        printf("Nilai akhir = B");
    else if (nilai_akhir >= 50)
        printf("Nilai akhir = C");
    else
        printf("Nilai akhir = D");
    return 0;
}
