#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    p = arr;  // pointer to array

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", *(p + i));

    printf("\n");
    return 0;
}