#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char teks[1000];
    char kata[50];

    // Memasukkan teks
    printf("Masukkan teks (maksimal 1000 karakter): ");
    fgets(teks, sizeof(teks), stdin);

    // Menghilangkan karakter newline dari fgets
    size_t length = strlen(teks);
    if (length > 0 && teks[length - 1] == '\n')
    {
        teks[length - 1] = '\0';
    }

    // Memasukkan kata yang ingin dicari
    printf("Masukkan kata yang ingin dicari: ");
    scanf("%s", kata);

    // Mencari dan menampilkan lokasi kata dalam teks
    int index = 0;
    char *ptr = teks;

    while ((ptr = strstr(ptr, kata)) != NULL)
    {
        int location = ptr - teks;
        printf("Kata '%s' ditemukan pada indeks %d dalam teks.\n", kata, location);
        ptr++;
        index++;
    }

    // Menampilkan hasil jika tidak ditemukan
    if (index == 0)
    {
        printf("Kata '%s' tidak ditemukan dalam teks.\n", kata);
    }

    return 0;
}

// int a()
// {
//     char teks[100];
//     char kata[50];
//     char *ketemu;
//     char *iyah;

//     printf("=== Pencarian Kata ===\n");

//     printf("Teks yang ditulis: ");
//     scanf("%s", teks);

//     printf("\nMasukkan kata yang ingin dicari: ");
//     scanf("%s", kata);

//     ketemu = strstr(teks, kata);
//     iyah = strchr(teks,kata);

//     printf("%c",iyah);

//     if (ketemu != NULL)
//     {
//         // If 'result' is not NULL, it means the substring
//         // was found, so print it
//         printf("kata %s\n ditemukan pada ", ketemu);
//     }
//     else
//     {
//         // If 'result' is NULL, it means the substring was
//         // not found, so print appropriate message
//         printf("Substring not found.\n");
//     }

//     return 0;
// }
