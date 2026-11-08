#include <stdio.h>

int main() {
    double a, b;
    char amal;

    printf("Birinchi sonni kiriting: ");
    scanf("%lf", &a);

    printf("Amalni kiriting (+, -, *, /): ");
    scanf(" %c", &amal);

    printf("Ikkinchi sonni kiriting: ");
    scanf("%lf", &b);

    switch (amal) {
        case '+':
            printf("Natija = %.2lf", a + b);
            break;

        case '-':
            printf("Natija = %.2lf", a - b);
            break;

        case '*':
            printf("Natija = %.2lf", a * b);
            break;

        case '/':
            if (b != 0) {
                printf("Natija = %.2lf", a / b);
            }
            else {
                printf("0 ga bolish mumkin emas!");
            }
            break;

        default:
            printf("Noto'g'ri amal!");
    }

    return 0;
}