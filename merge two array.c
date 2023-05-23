#include <stdio.h>

void mergeArrays(int array1[], int size1, int array2[], int size2, int mergedArray[]) {
    int i, j, k;
    i = j = k = 0;

    while (i < size1 && j < size2) {
        if (array1[i] < array2[j])
            mergedArray[k++] = array1[i++];
        else
            mergedArray[k++] = array2[j++];
    }

    while (i < size1)
        mergedArray[k++] = array1[i++];

    while (j < size2)
        mergedArray[k++] = array2[j++];
}

int main() {
    int array1[5] = {1, 3, 5, 7, 9};
    int array2[4] = {2, 4, 6, 8};
    int mergedArray[9],i;

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    mergeArrays(array1, size1, array2, size2, mergedArray);

    printf("Merged Array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}

