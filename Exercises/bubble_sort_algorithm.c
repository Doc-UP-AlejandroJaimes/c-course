#include <stdio.h>

void swap(int *element, int *contiguos_element) {
    int tmp = *element;
    *element = *contiguos_element;
    *contiguos_element = tmp;
}

void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (*(arr +j) > *(arr + j + 1))
            {
                swap(arr + j, arr + j + 1);
            }   
        }   
    }
}

void print_array(int *arr, int size, char *title) {
    printf("\n%s\n", title);
    printf("[");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d,", *(arr + i));
    }
    printf("%d]", *(arr + size - 1));
}

int main () {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, n, "Normal Array");
    bubble_sort(arr, n);
    print_array(arr, n, "Sorted Array");
    return 0;
}