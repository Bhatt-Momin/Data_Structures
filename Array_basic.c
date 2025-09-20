#include <stdio.h>

int main() {
    int n, i,max, min;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max : %d\n", max);
    printf("Min: %d\n", min);
    int x,k=0;

    printf("entr the element to search:  ");
    scanf("%d", &x);


    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            k = 1;
            printf("element %d found at the position %d\n", x, i + 1);
            break;
        }
    }

    if (!k) {
        printf("element %d not found \n", x);
    }

    return 0;
}