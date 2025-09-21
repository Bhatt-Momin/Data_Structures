#include <stdio.h>

int main()
{
    //deletion of first element
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        printf("\n");
    }

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion of first element:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        printf("\n");
    }

    // Deletion of last element
        int arr2[] = {10, 20, 30, 40, 50};
        int n2 = sizeof(arr) / sizeof(arr[0]);
    
        printf("Original array:\n");
        for (int i = 0; i < n2; i++) {
            printf("%d ", arr2[i]);
            printf("\n");
        }
    
       
        n2--;  
    
        printf("Array after deletion of last element:\n");
        for (int i = 0; i < n2; i++) {
            printf("%d ", arr2[i]);
            printf("\n");
        }

        // Deletion of element at given position
        
        int arr3[] = {10, 20, 30, 40, 50};
        int n3 = sizeof(arr) / sizeof(arr[0]);
        int k ;
    
        printf("Original array:\n");
        for (int i = 0; i < n3; i++) 
        {
            printf("%d ", arr3[i]);
            printf("\n");
        }
        printf("Enter position to delete: \n");
        scanf("%d", &k);
    
        
        if (k < 0 || k >= n) {
            printf("Invalid index to delete.\n");
            return 1;
        }
    
        for (int i = k-1; i < n3 - 1; i++) {
            arr3[i] = arr3[i + 1]; 
            printf("\n");
        }
    
        n3--; 
    
        printf("Array after deletion of given position element :\n");
        for (int i = 0; i < n3; i++) {
            printf("%d ", arr3[i]);
            printf("\n");
        }
    
        return 0;

    return 0;
}