#include <stdbool.h>
#include <string.h>
#include <stdio.h>

// contoh define
#define tahun 2023
#define dosen "bufera"
// contoh function utama
int main()
{

    const int umur = 18;
    double tabungan;
    float jam = 09.30;
    const char currency = 'R';
    char nama[] = "Afif Amhar";

    printf("\f");
    printf("Nama Mahasiswa : %s\n", nama);
    printf("Pelajaran PemDas pada pukul : %.2f\n", jam);
    printf("Bersama dosen : %s\n", dosen);
    printf("Oh umur %d ya kamu tahun ini\n", umur);
    printf("masukan saldo anda: ");
    scanf("%lf", &tabungan);
    printf("selamat saldo anda sebanyak: %lf\n", tabungan);

    // Boolean
    bool isTrue = true;
    bool isFalse = false;
    printf("\fBoolean values:\n");
    printf("isTrue: %d\n", isTrue);   // true = 1
    printf("isFalse: %d\n", isFalse); // false = 0

    // Strings
    char str1[] = "Hello";
    char str2[10];
    strcpy(str2, str1); // strcpy salin str 1 menjadi str 2
    printf("\nStrings:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2); // jadi hello karena nyalin str1

    // Pointers
    int num = 42;
    int *ptr = &num;
    printf("\nPointers:\n");
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);       // alamat memori num
    printf("Value of ptr: %p \n", ptr);         // memiliki alamat yang sama dengan num karena ptr = num
    printf("Value pointed by ptr: %d\n", *ptr); // *ptr= num = 42

    /*nilai variable x bisa berubah ubah karena bukan const beberapa macam operator di C
     */
    int x = 5;

    x += 3; // 5+3 = 8
    printf("\nNilai X Setelah penambahan : %d\n", x);

    x -= 2; // 8-2= 6
    printf("Nilai X Setelah penggurangan : %d\n", x);

    x *= 4; // 6 x 4= 24
    printf("Nilai X Setelah perkalian : %d\n", x);

    x /= 2; // 24 / 2= 12
    printf("Nilai X Setelah pembagian : %d\n", x);

    x %= 5; // 12%5= 12-10 = 2 | modulo = sisa bagi
    printf("Nilai X Setelah modulo : %d\n", x);

    return 0;
}

//   fprintf(fptr, "nama: %s\n", nama[i]);
//             fprintf(fptr, "nim: %s\n", nim[i]);
//             fprintf(fptr, "Program Studi: %s\n", progStudi[i]);
//             fprintf(fptr, "\n");