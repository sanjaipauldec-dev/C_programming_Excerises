#include <stdio.h>
int partition(int a[], int start, int end) {
    int pivot = a[end];
    int i = start - 1;

    for (int j = start; j <= end - 1; j++) {
        if (a[j] < pivot) {
            i++;
 if (start < end) {
        int p = partition(a, start, end);
        quick(a, start, p - 1);
        quick(a, p + 1, end);
    }
}
void printArr(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[end]);
    return i + 1;
}

int main() {
    int a[] = {24, 9, 29, 14, 19, 27};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Before Sorting Array Elements are:\n");
    printArr(a, n);

    quick(a, 0, n - 1);

    printf("After Sorting Array Elements are:\n");
    printArr(a, n);

    return 0;
}