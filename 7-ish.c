#include <stdio.h>

int main() {
    int n;

    printf("Ikki xonali son kiriting: ");
    scanf("%d", &n);

    printf("Teskari son = %d%d", n % 10, n / 10);

    return 0;
}