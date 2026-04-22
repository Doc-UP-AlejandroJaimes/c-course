#include <stdio.h>
int largest (int *arr, int size) {
    int max = *arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    
    return max;
}
int main() {
    int arr [5] = {10, 4, 3, 75, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mayor = *arr;
    printf("%d\n", mayor);
    printf("%d", largest(arr, size));
    return 0;
}