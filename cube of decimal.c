#include <stdio.h>

double cube(double num) {
    return num * num * num;
}

int main() {
    double number;
    
    printf("Enter a decimal number: ");
    scanf("%lf", &number);
    
    double result = cube(number);
    printf("The cube of %.2f is %.2f\n", number, result);
    
    return 0;
}

