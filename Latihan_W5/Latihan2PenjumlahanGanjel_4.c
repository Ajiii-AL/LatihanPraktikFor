#include <stdio.h>

int main() {
    int n;
    int i;
    int jumlah = 0;

    printf("Masukkan bilangan ganjil N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2) {
        printf("%d \n", i);
        jumlah = jumlah + i;
    }

    printf("Total penjumlahan = %d\n", jumlah);

    return 0;
}