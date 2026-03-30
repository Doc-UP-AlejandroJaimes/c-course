#include <stdio.h>

int isEvenNumber(int number) {
    if (number % 2 == 0)
    {
        return 1;
    }
    return 0;
}

void ladder_if_else(int number1, int number2) {
    if (number1 == number2)
    {
        printf("\nResult: %d = %d",number1,number2);
    } else if (number1 > number2)
    {
        printf("\nResult: %d > %d",number1, number2);
    } else {
        printf("\nResult: %d < %d",number1,number2);
    }
}

void nested_if_else(int number1, int number2) {
    int evenNumber1 = isEvenNumber(number1);
    int evenNumber2 = isEvenNumber(number2);

    if (evenNumber1)
    {
        if (evenNumber2)
        {
            printf("\nBoth numbers are even: %d > %d",number1, number2);
        } else {
            printf("\nNumber1: %d even\tNumber2: odd %d",number1, number2);
        }
    } else {
        if (evenNumber2)
        {
            printf("\nNumber2: %d even\tNumber1: odd %d",number1, number2);
        }
    }
    
}

char* is_pass_or_fail(int score){
    char *result = "";
    if  (score >= 50) {
        result = "Pass";
    } else {
        result = "Fail";
    }
    return result;
}


int main () {
     int number1, number2;
    printf("Enter two integers: "); scanf("%d %d", &number1, &number2);

    if (isEvenNumber(number1))
    {
        printf("The number %d is even.", number1);
    } else {
        printf("The number %d is odd.", number1);
    }
    printf("\nLadder Else If");
    ladder_if_else(number1, number2);
    nested_if_else(number1, number2);
    char *result = is_pass_or_fail(15);
    printf("\n%s", result);
    

    return 0;
}