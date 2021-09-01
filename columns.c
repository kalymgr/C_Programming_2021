/**
Program to test columns
Useful info: https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm
*/

# include <stdio.h>
#include <string.h>


int main() {

    // Print some elements with right justification
    printf("\n\n ---Print elements with right justification--- \n");
    printf("%20s", "michalis");
    printf("%20s", "tsougranis");
    printf("\n");
    printf("%20s", "sofia");
    printf("%20s", "erga");

    // Print some elements with left justification
    printf("\n\n ---Print elements with left justification--- \n");
    printf("%-20s", "michalis");
    printf("%-20s", "tsougranis");
    printf("\n");
    printf("%-20s", "sofia");
    printf("%-20s", "erga");

    // Print some elements with center justification
    printf("\n\n ---Print elements with center justification--- \n");
    printf("%*s", 10+strlen("skoulikomirmigkotrypa")/2,"skoulikomirmigkotrypa");
    printf("\n");
    printf("%*s", 10+strlen("sofia")/2, "sofia");
}
