// variable: Is a container (storage area) to hold data.

/**
 * Rules for naming a variable
 * 1. A variable name can only have letters (both uppercase and lowercase letters), 
 * digits and underscore.

 * 2. The first letter of a variable should be either a letter or an underscore.

 * 3. There is no rule on how long a variable name (identifier) can be. However, 
    you may run into problems in some compilers if the variable name 
    is longer than 31 characters.

 * Note: You should always try to give meaningful names to variables. 
   For example: firstName is a better variable name than fn.
 */

#include <stdio.h>

const double PI = 3.14;


int main () {

  // Variable
  char *first_name = "Alejandro";
  printf("Name: %s\n", first_name);
  
  // Constants
  printf("PI: %f\n", PI);
  return 0;
}