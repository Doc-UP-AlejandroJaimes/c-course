/**
 * In programming, a loop is used to repeat a block of code until the specified 
 * condition is met.
 * C programming has three types of loops:
 * for loop
 * while loop
 * do...while loop
*/
#include <stdio.h>

void loop_example(int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", i);
    }
}

int factorial(int num){
    if (num == 1)
        return 1;
    return num * factorial(num - 1);
}

int main () {
    int number;
    printf("Enter a no negative number: "); scanf("%d", &number);
    int res = factorial(number);
    printf("!%d = %d", number, res);
    loop_example(number);
    return 0;
}