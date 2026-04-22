/*
 * Pointers Calculator - Documentation
 *
 * This file demonstrates pointer arithmetic and array manipulation in C.
 * Functions:
 * - sum: Computes the sum of array elements.
 * - largest: Finds the largest value in the array.
 * - even_products: Calculates the product of elements at even indices.
 * - swap: Exchanges values pointed to by two pointers.
 * - average: Calculates and stores the average of array elements.
 * - print_array: Displays array elements with a title.
 *
 * Author: Alejandro Jaimes
 * Course: C Programming
 */

#include <stdio.h>

int sum(int *arr, int size) {
    int acum = 0;
    for (int i = 0; i < size; i++)
    {
        acum += *(arr + i);
    }
    return acum;
}

int largest (int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++)
    {
        if (max < *(arr + i))
            max = *(arr + i);
    }

    return max;
}

int even_products (int *arr, int size) {
    int product = 1;
    for (int i = 0; i < size; i=i+2)
    {
        product *= *(arr + i);
    }
    return product;
}

void swap(int *a, int *b) {
    int *first = a;
    int *end = b;
    int tmp = *first;
    *first = *end;
    *end = tmp;
}

void average(int *arr, int size, double *result) {
    int sum_elements = sum(arr, size);
    *result = (double) sum_elements / size;
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
   int arr [5] = {10, 4, 3, 7, 2};
   int size = sizeof(arr) / sizeof(arr[0]);
   double result = 0;
   printf("\nSuma: %d", sum(arr, size));
   printf("\nMayor: %d", largest(arr, size));
   printf("\nProducto pares: %d", even_products(arr, size));
   print_array(arr, size, "Original Array");
   swap(arr, arr + size - 1);
   print_array(arr, size, "After Swap Array");
   average(arr, size, &result);
   printf("\nAverage: %.2f", result);
}
