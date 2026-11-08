#include <stdio.h>

int main() {
    int n;

    printf("1 - Bahor\n");
    printf("2 - Yoz\n");
    printf("3 - Kuz\n");
    printf("4 - Qish\n");

    scanf("%d", &n);

    switch (n) {
        case 1: printf("Bahor"); break;
        case 2: printf("Yoz"); break;
        case 3: printf("Kuz"); break;
        case 4: printf("Qish"); break;
        default: printf("Xato");
    }

    return 0;
}