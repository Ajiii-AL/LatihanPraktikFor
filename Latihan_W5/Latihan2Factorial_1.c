#include <stdio.h>

int main() {

    int a;
    int n = 0;
    int hasil = 1;

    printf("masukan nilai n \n");
    scanf("%d", &n);

    for (a = n; a >= 1; a--) {
        printf("%d \n", a);
        hasil = hasil * a;
    }
    printf("hasil decremental  : %d", hasil);


    return 0;
}