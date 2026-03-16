#include <stdio.h>

/**
 * The printf() is a library function to send formatted output to the screen. 
 * The function prints the string inside quotations.
 *
 * To use printf() in our program, we need to include stdio.h header 
 * file using the #include <stdio.h> statement.
 *
 * The return 0; statement inside the main() function is the "Exit status" 
 * of the program. It's optional.
 */

int main () {

    // Output
    /**
     * 
     * Here's a list of commonly used C data types and their format specifiers.
        Data Type	Format Specifier
        int	%d
        char	%c
        float	%f
        double	%lf
        short int	%hd
        unsigned int	%u
        long int	%li
        long long int	%lli
        unsigned long int	%lu
        unsigned long long int	%llu
        signed char	%c
        unsigned char	%c
        long double	%Lf
     */
    int testInteger = 5;
    float number1 = 13.5;
    double number2 = 12.4;
    char chr = 'a';    
    
   

    // Input
    int testNumber;
    printf("Enter an integer: ");
    scanf("%d", &testNumber);  
    

    float num1;
    double num2;
    char chrUser;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);
    printf("Enter a character: ");
    scanf("%c",&chrUser);     
    printf("You entered %c.", chrUser);  

    
    printf("character = %c", chr);  
    printf("C Tutorial :)");
    printf("Number = %d", testInteger);
    printf("number1 = %f\n", number1);
    printf("number2 = %lf", number2);
    printf("Number = %d",testNumber);
    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);

    return 0;
}