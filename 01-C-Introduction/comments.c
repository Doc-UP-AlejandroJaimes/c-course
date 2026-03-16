/*
 ============================================================================
 File            : comments.c
 Author          : Prf. Juan Alejandro Carrillo Jaimes
 Brief           : Example of comments in C.
 Compilation:
   gcc comments.c -o comments

 Ejecución:
   ./comments.exe
 ============================================================================
*/
#include <stdio.h>

/**
 * Multiline Comments
 * function: check_is_legal_age
 * params: @param int age: age of the person
 * result: @result true/false if the person is legal age
 */
int check_is_legal_age(int age) {
    return age > 18;
}

int main () {
    // Single-line comment
    int age = 15;
    if (check_is_legal_age(age))
    {
        printf("Is legal age");
    } else {
        printf("Not of legal age");
    }
    
    return 0;
}