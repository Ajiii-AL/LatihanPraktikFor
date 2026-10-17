#include <stdio.h>

int main(void) {

    int n;
    int a;
    int hasil = 1;

    printf("Masukan angka : ");
        scanf("%d", &n);

    for (a = 1; a <= n; a++) {
        printf("%d \n", a);
        hasil = hasil * a;
    }

    printf("hasil nya incremental adalah %d", hasil);

    return 0;
}
