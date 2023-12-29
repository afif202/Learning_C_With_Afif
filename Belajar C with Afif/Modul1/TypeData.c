#include <stdio.h>

int main()
{
    // tipe data basic yang ada di bahasa C

    int umur = 18;                           // size dalam memory 2/4 bytes
    float jarak = 2.2;                       // size dalam memory 4 bytes
    double penghasilan = 1000.2000000002010; // size dalam memory 8 bytes
    char meter = 'M';                        // size dalam memory 1 bytes
    char nama[] = "Afif Amhar";              // size dalama memory menyesuaikan berapa huruf yang ada
    // dalam kasus ini "afif amhar memiliki 11 bytes"
    //  jika type data char menggunakan [] maka kita bisa menyebutnya "String"

    // Format Pemanggilan

    printf("\fNama ku %s, Umur ku %d \n", nama, umur);
    printf("Jarak kost ku dengan kampus %f %c \n", jarak, meter);
    printf("semoga di gaji : %lf \n", penghasilan);

     /*
    %d/%i = int
    %f = float
    %lf = longFloat atau bisa kita sebut Double
    %c = char
    %s = String
    */
}