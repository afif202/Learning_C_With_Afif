#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void buatfile()
{
    FILE *fptr;

    fptr = fopen("file.txt", "w");

    if (fptr == NULL)
    {
        printf("File gagal dibuat, program akan ditutup");
        exit(0);
    }
    else
    {
        printf("file berhasil dibuat");
    }
}

void tambahdata()
{
    FILE *fptr;

    char addData[30] = "iya?";
    fptr = fopen("file.txt", "a"); // mode a untuk menampah text

    if (fptr == NULL)
    {
        printf("File gagal dibuka");
    }
    else
    {
        printf("File berhasil dibuka");

        if (strlen(addData) > 0)
        {
            fputs(addData, fptr);
            fputs("\n", fptr);
        }

        fclose(fptr);

        printf("\nData berhasil ditambah dan file sudah ditutup");
    }
}

void bacafile()
{
    FILE *fptr;

    char addData[30];
    fptr = fopen("data_mahasiswa.txt", "r"); // mode r untuk membaca file

    if (fptr != NULL)
    {
        printf("isi data adalah:\n");

        while (fgets(addData, sizeof(addData), fptr) != NULL)
        {
            printf("%s", addData);
        }
        fclose(fptr);
    }
    else
    {
        printf("File gagal dibuka");
    }
}

void codelab2cara2()
{
    FILE *fptr;

    char nama[3][50] = {"Kiara Azzahra", "Annisa Artanti Widyadhana", "Na Jaemin"};
    char nim[3][30] = {"202110370311426", "202110370311217", "202110370311425"};
    char progStudi[3][60] = {"Informatika", "Teknik informatika", "Sistem Informasi"};

    fptr = fopen("data_mahasiswa.txt", "w");

    if (fptr == NULL)
    {
        printf("File gagal dibuka");
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            fprintf(fptr, "nama: %s\n", nama[i]);
            fprintf(fptr, "nim: %s\n", nim[i]);
            fprintf(fptr, "Program Studi: %s\n", progStudi[i]);
            fprintf(fptr, "\n");

            // fputs(nama[i], fptr);
            // fputs("\n", fptr);
            // fputs(nim[i], fptr);
            // fputs("\n", fptr);
            // fputs(progStudi[i], fptr);
            // fputs("\n", fptr);
            // fputs("\n", fptr);
        }

        fclose(fptr);

        printf("Data mahasiswa telah ditulis ke dalam file.\n");
    }
}

int main()
{
    // buatfile();
    // tambahdata();
    bacafile();
    // codelab2cara2();
}
