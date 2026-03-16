#include <stdio.h>

/* C Arithmetic Operators

Operator	Meaning of Operator
+	addition or unary plus
-	subtraction or unary minus
*	multiplication
/	division
%	remainder after division (modulo division)

*/

void aritmethic_operators(char *title) {
    int a = 9,b = 4, c;

    printf("****** %s ******\n", title);
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
}

/* C Increment and Decrement Operators

C programming has two operators increment ++ and decrement -- 
to change the value of an operand (constant or variable) by 1.
*/

void increment_and_decrement(char *title) {
    printf("****** %s ******\n", title);
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

}

/** C Assignment Operators
 * Operator	Example	Same as
 * =	a = b	a = b
 * +=	a += b	a = a+b
 * -=	a -= b	a = a-b
 * *=	a *= b	a = a*b
 * /=	a /= b	a = a/b
 * %=	a %= b	a = a%b
 */

 void assignment_operators(char *title) {
    printf("****** %s ******\n", title);
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);
}

/** C Relational Operators
 * Operator	Meaning of Operator	Example
    ==	Equal to	5 == 3 is evaluated to 0
    >	Greater than	5 > 3 is evaluated to 1
    <	Less than	5 < 3 is evaluated to 0
    !=	Not equal to	5 != 3 is evaluated to 1
    >=	Greater than or equal to	5 >= 3 is evaluated to 1
    <=	Less than or equal to	5 <= 3 is evaluated to 0
 */

void relational_operators(char *title) {
    printf("****** %s ******\n", title);

    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

}

/** C Logical Operators
 * 
 * Operator	        Meaning	                                                Example
    &&	            Logical AND. True only if all operands are true	        If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
    ||	            Logical OR. True only if either one operand is true	    If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
    !	            Logical NOT. True only if the operand is 0	            If c = 5 then, expression !(c==5) equals to 0.
 */

void logical_operators(char *title) {
    int a = 5, b = 5, c = 10, result;

    printf("****** %s ******\n", title);
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);
}

/** sizeof operator
 * The sizeof is a unary operator that returns 
 * the size of data (constants, variables, array, structure, etc).
*/

void size_of_operator(char *title) {
    printf("****** %s ******\n", title);
    int a;
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));
}

int main () {

    aritmethic_operators("Aritmethic Operators");
    increment_and_decrement("Increment and Decrement Operators");
    assignment_operators("Assignment Operators");
    relational_operators("Relational Operators");
    logical_operators("Logical Operators");
    size_of_operator("Sizeof Operator");

    return 0;
}