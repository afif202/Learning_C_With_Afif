#include <stdio.h>

int main()
{
    int n;
    int bt;

    printf("Masukkan nilai : ");
    scanf("%d", &n);
    printf("Masukkan Batas loop perkalian dan perpangkatan :");
    scanf("%d", &bt);

    printf("\n===Perkalian===\n");
    
    for (int i = 1; i <= bt; i++)
    {
        int hasil = n * i;
        printf("%d x %d = %d\n", n, i, hasil);
    }

    printf("\n===Perpangkatan====\n");
    for (int i = 1; i <= bt; i++)
    {
        double hasil = 1;
        for (int j = 1; j <= i; j++)
        {
            hasil *= n;

        }
        printf("%d pangkat %d = %.0lf\n", n, i, hasil);
    }
}