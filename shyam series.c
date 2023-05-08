#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int temp_sum = 0;
        for (j = 1; j <= i; j++) {
            temp_sum += j;
        }
        sum += temp_sum;
    }

    printf("The sum of the series is: %d", sum);

    return 0;
}

