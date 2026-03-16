#include <stdio.h>

int isEvenNumber(int number) {
    if (number % 2 == 0)
    {
        return 1;
    }
    return 0;
}


int main () {
    int number;
    printf("Enter an integer: "); scanf("%d", &number);
    if (isEvenNumber(number))
    {
        printf("The number %d is even.", number);
    } else {
        printf("The number %d is odd.", number);
    }
    

    return 0;
}