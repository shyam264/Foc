#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}

