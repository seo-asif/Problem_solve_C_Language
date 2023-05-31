#include <stdio.h>

void process(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = square(arr[i]);
    }
}
int square(int n)
{
    return n * n;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements before processing: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    process(arr, size);
    printf("Square of the array elements after processing: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

