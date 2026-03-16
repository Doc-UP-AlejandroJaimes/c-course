/**  Escape Sequences
 * Sometimes, it is necessary to use characters that cannot 
 * be typed or has special meaning in C programming. 
 * For example: newline(enter), tab, question mark etc.

 * In order to use these characters, escape sequences are used.

 Escape Sequences	Character
    \b	Backspace
    \f	Form feed
    \n	Newline
    \r	Return
    \t	Horizontal tab
    \v	Vertical tab
    \\	Backslash
    \'	Single quotation mark
    \"	Double quotation mark
    \?	Question mark
    \0	Null character
 */

#include <stdio.h>

int main() {
    // Literals
    int x =  20;
    int y =  12;
    printf("x = %d\ty = %d\n",x,y);
    return 0;
}