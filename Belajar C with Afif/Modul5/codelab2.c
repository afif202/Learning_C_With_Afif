#include <stdio.h>
#define b 2

int main()
{
    int matriks1[2][2] = {
        {3, 4}, 
        {5, 6}};

    int matriks2[2][2] = {
        {3, 4}, 
        {5, 6}};

    int hasil[2][2];

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            printf(" %d", hasil[i][j]);
        }
        printf("\n");
    }
}