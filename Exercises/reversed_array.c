/**
 * Reversed array algorithm:
 * Input: N = 4, [1, 4, 3, 2]
 * Output: []
*/
#include <stdio.h>
#include <stdlib.h>

/*
reverse_array()

Steps:
1. Read array.
2. Declare dynamic array.
3. For inverse.
4. populate dynamic array inverse.

*/

void change_positions(int *arr, int size) {
    int *ptr_init = arr;
    int *ptr_end = arr + (size - 1);

    int tmp = *ptr_init;
    *ptr_init = *ptr_end;
    *ptr_end = tmp;
}

int* reverse_array(int *array_original, int size) {
    int *reversed_array = (int *) malloc (size * sizeof(int));
    
    for (int i = 0; i < size; i++)
    {
        *(reversed_array + i) =  *(array_original + (size - i - 1));
    }
    
    change_positions(reversed_array, size);

    return reversed_array;
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
}


int main () {
    int arr [] = {8, 4, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("====original array=======\n");
    print_array(arr, size);
    printf("====reversed array=======\n");
    int *reversed_array = reverse_array(arr, size);
    
    print_array(reversed_array, size);

    free(reversed_array);

    
    
    return 0;
}
