#include <stdio.h>
#include <stdlib.h>

void printOneToTen();

void forPrintPerThree(int a, int b);

void whilePrintPerThree(int a, int b);

void printNumbersWithStep(int a, int b, int c);

void printNumbersWithStepAndArgs(int argc, const char *argv[]);

int sumOneToHundred();

int sumBetween(int a, int b);

int sumBetweenWithStepAndArgs(int argc, const char *argv[]);

void reverseInt(int a);

void reverseIntWithArgs(int argc, const char *argv[]);

int main(const int argc, const char *argv[]) {

    return 0;
}

void printOneToTen() {
    int i = 1;
    for (; i <= 10; i++) {
        printf("%d ", i);
    }
}

void forPrintPerThree(const int a, const int b) {
    const int max = a > b ? a : b, min = a < b ? a : b;
    int i = max;
    for (; i >= min; i -= 3) {
        int j = 0;
        for (; j < 3 && i - j >= min; j++) {
            printf("%d ", i - j);
        }
        printf("\n");
    }
}

void whilePrintPerThree(const int a, const int b) {
    const int max = a > b ? a : b, min = a < b ? a : b;
    int i = max;
    while (i >= min) {
        int j = 0;
        while (j < 3 && i - j >= min) {
            printf("%d ", i - j);
            ++j;
        }
        i -= 3;
        printf("\n");
    }
}

void printNumbersWithStep(const int a, const int b, const int c) {
    const int max = a > b ? a : b, min = a < b ? a : b;
    int i = max;
    for (; i >= min; i -= c) {
        int j = 0;
        for (; j < c && i - j >= min; j++) {
            printf("%d ", i - j);
        }
        printf("\n");
    }
}

void printNumbersWithStepAndArgs(const int argc, const char *argv[]) {
    int a, b, c;
    int pas;
    switch (argc) {
        case 4:
            printNumbersWithStep(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
            break;
        case 3:
            printf("Veuillez entrer le pas (c) :\n>");
            scanf("%d", &pas);
            printNumbersWithStep(atoi(argv[1]), atoi(argv[2]), pas);
            break;
        case 2:
            printNumbersWithStep(1, atoi(argv[1]), 10);
            break;
        default:
            printf("Veuillez entrer la premiere valeur (a) :\n>");
            scanf("%d", &a);
            printf("Veuillez entrer la deuxieme valeur (b) :\n>");
            scanf("%d", &b);
            printf("Veuillez entrer le pas (c) :\n>");
            scanf("%d", &c);
            printNumbersWithStep(a, b, c);
            break;
    }
}

int sumOneToHundred() {
    int i = 0, sum = 0;
    for (; i < 100; i++) {
        sum += i;
    }
    return sum;
}

int sumBetween(const int a, const int b) {
    const int max = a > b ? a : b;
    int min = a < b ? a : b;
    int i = min + 1;
    for (; i < max; i++) {
        min += i;
    }
    return min;
}

int sumBetweenWithStepAndArgs(int argc, const char *argv[]) {
    int a, b;
    int sum = 0;
    switch (argc) {
        case 3:
            sum = sumBetween(atoi(argv[1]), atoi(argv[2]));
            break;
        case 2:
            printf("Veuillez entrer la deuxieme valeur (b) :\n>");
            scanf("%d", &b);
            sum = sumBetween(atoi(argv[1]), b);
            break;
        default:
            printf("Veuillez entrer la premiere valeur (a) :\n>");
            scanf("%d", &a);
            printf("Veuillez entrer la deuxieme valeur (b) :\n>");
            scanf("%d", &b);
            sum = sumBetween(a, b);
            break;
    }
    printf("%d", sum);
    return sum;
}

void reverseInt(int a) {
    while (a > 0) {
        printf("%d", a % 10);
        a /= 10;
    }
    printf("\n");
}

void reverseIntWithArgs(const int argc, const char *argv[]) {
    int a;
    if (argc < 2) {
        printf("Veuillez saisir un entier a inverser :\n>");
        scanf("%d", &a);
        reverseInt(a);
    } else {
        reverseInt(atoi(argv[1]));
    }
}
