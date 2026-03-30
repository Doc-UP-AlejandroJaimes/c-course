/**
 * Exercise: The Colider
 * Logic: Given an array of N positive integers, build its mirrored inverse using pointer arithmetic. 
 * Then, interleave both arrays by taking even-indexed elements from the original 
 * and odd-indexed elements from the inverse. 
 * 
 * With the resulting array, apply a cumulative reduction: multiply each element
 * by its position (starting at 1), and sum all those products to get a single number.
 * 
 * Constraints:
 * You must traverse arrays only with pointers (no arr[i])
 * The reduction index starts at 1, not 0
 * 
 * Input: A given array
 * Output: A single integer. Result of the reduction
*/

#include <stdio.h>
#include <stdlib.h>

int most_dominant(int reduction_arr, int reduction_reverse, int reduction_interleave) 
{
    int max = reduction_arr;
    if (reduction_reverse > max)
        max = reduction_reverse;

    if (reduction_interleave > max)
        max = reduction_interleave;
    
    return max;
}

void check_dominant_reduction(int reduction_arr, int reduction_reverse, 
                                int reduction_interleave) 
{
    char **winners = malloc(3 * sizeof(char *));
     if (!winners) fprintf(stderr, "malloc failed\n");
    int count = 0;

    int max = most_dominant(reduction_arr, reduction_reverse, reduction_interleave);
    // Show reductions
    printf("Reduction Array: %d\n", reduction_arr);
    printf("Reduction Reverse: %d\n", reduction_reverse);
    printf("Reduction Interleave: %d\n", reduction_interleave);

    if (reduction_arr == max)           *(winners + count++) =  "Original";
    if (reduction_reverse == max)       *(winners + count++) =  "Mirror";
    if (reduction_interleave == max)    *(winners + count++) =  "Collision";

    if (count == 1) printf("%s dominates\n", *(winners + 0));
    if (count == 2) printf("Tie between %s and %s \n", *(winners + 0), *(winners + 1));
    if (count == 3) printf("Perfect symmetry\n");

    free(winners);
}

int apply_reduction (int *arr, int size) {
    int reduction = 0;
    for (int i = 0; i < size; i++)
    {
        reduction += *(arr + i) * (i+1);
    }
    return reduction;
}

int *interleave_elements(int *arr, int *reverse, int size) {
    int *interleave_arr = (int * ) malloc (size * sizeof(int));
    if (!interleave_arr) fprintf(stderr, "malloc failed\n");
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0) // even
        {
            *(interleave_arr + i) = *(arr + i);
        } else {
            *(interleave_arr + i) = *(reverse + i);
        }
    }
    return interleave_arr;
}

int *reverse_array(int *arr, int size) {
    int *reverse = (int *) malloc (size * sizeof(int));
    if (!reverse) fprintf(stderr, "malloc failed\n");

    for (int i = 0; i < size; i++)
    {
        *(reverse + i) = *(arr + (size - i - 1));
    }
    return reverse;
}

void print_array(char *title, int *arr, int size) {
    printf("%s\t[", title);
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d, ", *(arr + i));    
    }
    printf("%d]\n", *(arr + size - 1));
    
}

int main() {
    // 1. Declare array
    int arr [] = {9, 9, 8, 22, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 2. Reversed array
    int *reverse = reverse_array(arr, size);

    // 3. Show arrays
    print_array("Original: ", arr, size);
    print_array("Inverse: ",reverse, size);

    // 4. Interleave array
    int *interleave = interleave_elements(arr, reverse, size);
    print_array("Interleave: ",interleave, size);

    // 5. Reduction
    int reduction_arr =  apply_reduction(arr, size);
    int reduction_rev =  apply_reduction(reverse, size);
    int reduction_int =  apply_reduction(interleave, size);


    check_dominant_reduction(reduction_arr, reduction_rev, reduction_int);

    // N. Free memory
    free(reverse);
    free(interleave);

    return 0;
}

