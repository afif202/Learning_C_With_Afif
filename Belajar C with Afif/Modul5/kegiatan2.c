#include <stdio.h>

void inputMatrix(int matrix[3][3])
{
    printf("Masukkan elemen matriks 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[3][3])
{
    printf("Matriks 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];
    int option;

    do
    {
        printf("\nMenu:\n");
        printf("1. Penjumlahan Matriks\n");
        printf("2. Pengurangan Matriks\n");
        printf("3. Perkalian Matriks\n");
        printf("4. Keluar\n");
        printf("Pilih operasi (1-4): ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nMasukkan matriks pertama:\n");
            inputMatrix(matrix1);
            printf("\nMasukkan matriks kedua:\n");
            inputMatrix(matrix2);

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }

            printf("\nHasil penjumlahan:\n");
            printMatrix(resultMatrix);
            break;

        case 2:
            printf("\nMasukkan matriks pertama:\n");
            inputMatrix(matrix1);
            printf("\nMasukkan matriks kedua:\n");
            inputMatrix(matrix2);

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    resultMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }

            // Menampilkan hasil pengurangan
            printf("\nHasil pengurangan:\n");
            printMatrix(resultMatrix);
            break;

        case 3:
            printf("\nMasukkan matriks pertama:\n");
            inputMatrix(matrix1);
            printf("\nMasukkan matriks kedua:\n");
            inputMatrix(matrix2);

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    resultMatrix[i][j] = 0;
                    for (int k = 0; k < 3; k++)
                    {
                        resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }

            printf("\nHasil perkalian:\n");
            printMatrix(resultMatrix);
            break;

        case 4:
            printf("Program berakhir.\n");
            break;

        default:
            printf("INPUTAN TIDAK VALID. Silakan pilih opsi 1-4.\n");
        }

    } while (option != 4);
    return 0;
}