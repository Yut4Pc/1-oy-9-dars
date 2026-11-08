#include <stdio.h>

int main() {
    int n;

    printf("1 - Avtomobil\n");
    printf("2 - Avtobus\n");
    printf("3 - Poyezd\n");
    printf("4 - Samolyot\n");

    scanf("%d", &n);

    switch (n) {
        case 1: printf("Avtomobil"); break;
        case 2: printf("Avtobus"); break;
        case 3: printf("Poyezd"); break;
        case 4: printf("Samolyot"); break;
        default: printf("Xato tanlov");
    }

    return 0;
}