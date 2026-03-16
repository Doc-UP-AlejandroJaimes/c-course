/** Challenge
 * Write a function to find the smallest of two numbers.
 * Return the smallest of the two numbers a and b.
 * For example, if a = 3, and b = 7, the expected output is 3.
*/

#include <stdio.h>

int find_smallest(int a, int b) {
    return (a < b) ? a : b;
}

int main () {
    int smallest = find_smallest(3, 7);
    printf("%d", smallest);
    return 0;
}