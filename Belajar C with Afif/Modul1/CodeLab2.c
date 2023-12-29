#include <stdio.h>

//Codelab2

int main() {
   int apples = 5, bananas = 8;
   float orangePrice = 1.5, bananaPrice = 0.75;
   char currency = '$';

    float totalCost = (apples* orangePrice) + (bananas * bananaPrice);

    printf("Jumlah apel: %d\n", apples);
    printf("Jumlah Pisang: %d\n", bananas);
    printf("Harga jeruk per buah: %.2f %c\n", orangePrice, currency);
    printf("Harga pisang per buah : %.2f %c\n",bananaPrice, currency);
    printf("Total biaya: %.3f %c\n", totalCost, currency);

    return 0;
}