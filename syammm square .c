#include <stdio.h>

double square_root(double num);

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %lf is %lf", num, square_root(num));
    return 0;
}

double square_root(double num) {
    double x = num;
    double y = 1;
    double e = 0.000001; // the error tolerance

    while (x - y > e) {
        x = (x + y) / 2;
        y = num / x;
    }

    return x;
}

