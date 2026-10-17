#include <stdio.h>

int main() {
    int n;
    int a;
    int angka;
    int minimal;

    printf("Masukkan jumlah angka: ");
    scanf("%d", &n);

    printf("Masukkan angka ke-1: ");
    scanf("%d", &minimal);

    for (a = 2; a <= n; a++) {
        printf("Masukkan angka ke-%d: ", a);
        scanf("%d", &angka);

        if (angka < minimal) {
            minimal = angka;
        }
    }

    printf("Nilai terkecil adalah = %d\n", minimal);

    return 0;
}
