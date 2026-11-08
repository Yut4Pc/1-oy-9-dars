#include <stdio.h>

int main() {
    int parol;

    printf("Parolni kiriting: ");
    scanf("%d", &parol);

    while (parol != 12345) {
        printf("Xato! Qayta kiriting: ");
        scanf("%d", &parol);
    }

    printf("Parol togri!");

    return 0;
}