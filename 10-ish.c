#include <stdio.h>

int main() {
    int n;
    int musbat = 0, manfiy = 0;

    printf("Son kiriting: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n > 0) {
            musbat++;
        }
        else {
            manfiy++;
        }

        printf("Son kiriting: ");
        scanf("%d", &n);
    }

    printf("Musbat sonlar = %d\n", musbat);
    printf("Manfiy sonlar = %d", manfiy);

    return 0;
}