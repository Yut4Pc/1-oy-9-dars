#include <stdio.h>

int main() {
    int n;

    printf("1 - Osh\n");
    printf("2 - Lagmon\n");
    printf("3 - Manti\n");
    printf("4 - Shorva\n");
    printf("5 - Somsa\n");

    scanf("%d", &n);

    switch (n) {
        case 1: printf("Osh"); break;
        case 2: printf("Lagmon"); break;
        case 3: printf("Manti"); break;
        case 4: printf("Shorva"); break;
        case 5: printf("Somsa"); break;
        default: printf("Xato");
    }

    return 0;
}