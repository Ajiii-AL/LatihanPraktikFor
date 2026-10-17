#include <stdio.h>

int main() {
    int a;
    int b;
    int n;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &n);

    for (a = 1; a <= n; a++) {
        for (b = 1; b <= a; b++) {
            printf("*");
        }
        printf("\n");
    }

    for (a = n - 1; a >= 1; a--) {
        for (b = 1; b <= a; b++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}