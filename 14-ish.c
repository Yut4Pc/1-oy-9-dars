#include <stdio.h>

int main() {
    int n;
    double sum;

    printf("1 - Dollar\n");
    printf("2 - Yevro\n");
    printf("3 - Rubl\n");

    scanf("%d", &n);

    printf("Som kiriting: ");
    scanf("%lf", &sum);

    switch (n) {
        case 1:
            printf("Dollar = %.2lf", sum / 12000);
            break;

        case 2:
            printf("Yevro = %.2lf", sum / 13000);
            break;

        case 3:
            printf("Rubl = %.2lf", sum / 130);
            break;

        default:
            printf("Xato tanlov");
    }

    return 0;
}