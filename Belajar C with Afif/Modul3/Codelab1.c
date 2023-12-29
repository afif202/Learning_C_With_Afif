#include <stdio.h>

int main()
{
    int nilai;
    printf("Masukkan nilai Anda: ");
    scanf("%d", &nilai);
    if (nilai >= 0 && nilai <= 100)
    {
        if (nilai >= 90)
        {
            printf("Nilai Anda adalah A.\n");
        }
        else if (nilai >= 80)
        {
            printf("Nilai Anda adalah B.\n");
        }
        else if (nilai >= 70)
        {
            printf("Nilai Anda adalah C.\n");
        }
        else if (nilai > 60)
        {
            printf("Nilai Anda adalah D.\n");
        }
        else
        {
            printf("Nilai Anda adalah E.\n");
        }
        printf("Program Selesai\n");
    }
    else
    {
        printf("\fInput tidak valid. Nilai harus berada dalam rentang 0 hingga 100.\f\n");
    }
    return 0;
}