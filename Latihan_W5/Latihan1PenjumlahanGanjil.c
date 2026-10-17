#include <stdio.h>

int main () {

    int a;
    int Panjang_angka = 0;
    int jumlah = 0;

    printf("masukkan panjang jumlah angka :");
    scanf("%d", &Panjang_angka);

    for (a = 1; a <= Panjang_angka; a++) {
        if (a % 2 == 1) {
            printf("%d \n", a);
            jumlah = jumlah + a;
        }
    }
    printf("panjang angkanya %d \n", Panjang_angka);
    printf("hasil penjumlahan ganjil nya %d", jumlah);


    return 0;
}