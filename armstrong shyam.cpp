#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, sum = 0, digits = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (n == sum) {
        printf("%d is an Armstrong number.", n);
    }
    else {
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}

