#include <stdio.h>

int main() {
    int pul, sum = 0;

    while (sum < 100000) {
        printf("Pul kiriting: ");
        scanf("%d", &pul);

        sum += pul;
    }

    printf("Jami pul = %d", sum);

    return 0;
}