#include <stdio.h>

void kegiatan1();

int main()
{
    kegiatan1();
}

void kegiatan1()
{
    int n;

    // Meminta input dari user untuk jumlah elemen dalam array
    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);

    // Inisialisasi array dengan jumlah elemen yang dimasukkan oleh user
    int array[n];

    // Meminta input dari user untuk setiap elemen array
    printf("Masukkan elemen array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Elemen ke-%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Mengelompokkan angka-angka ganjil dan genap ke dalam dua array terpisah
    int arrayGanjil[n], arrayGenap[n];
    int countGanjil = 0, countGenap = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            arrayGenap[countGenap] = array[i];
            countGenap++;
        }
        else
        {
            arrayGanjil[countGanjil] = array[i];
            countGanjil++;
        }
    }

    // Menampilkan angka-angka ganjil
    printf("\nAngka-angka ganjil dalam array: ");
    for (int i = 0; i < countGanjil; i++)
    {
        printf("%d ", arrayGanjil[i]);
    }

    // Menampilkan angka-angka genap
    printf("\nAngka-angka genap dalam array: ");
    for (int i = 0; i < countGenap; i++)
    {
        printf("%d ", arrayGenap[i]);
    }
    printf("\n");
}
//  for (int k = 0; k < 3; k++)
//                     {
//                         resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
//                     }