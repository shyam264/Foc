#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication Table for %d:\n", number);
    printf("---------------------------\n");

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}

