#include <stdio.h>

double square(double num) {
    return num * num;
}

int main() {
    double decimal;
    printf("Enter a decimal number: ");
    scanf("%lf", &decimal);

    double result = square(decimal);
    printf("Square of %.2f is %.2f\n", decimal, result);

    return 0;
}

