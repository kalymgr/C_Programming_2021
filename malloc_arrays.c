/**
Program that show the use of malloc (simple variables, arrays)

*/

# include <stdio.h>
#include <stdlib.h>


#define M 3

int main() {

    // create a simple int pointer
    int *p;  // create the int pointer
    p= (int*) malloc(sizeof(int));  // initialize the pointer (allocate memory size 4 bytes)
    *p = 7;

    // create a simple dynamic one dimensional array, load it with some elements and show them on screen
    int *t;  // create the int pointer
    t = (int*) malloc(sizeof(int) * M);  // initialize the pointer (allocate memory size M x 4 bytes  )
    t[0] = 10;  // load elements on screen
    t[1]= 12;
    t[2] = 9;

    int i;
    printf("\n Elements of one-dimensional array:");  // show elements on screen
    for (i=0;i<M;i++)
        printf("%d, ",t[i]);

    // create a simple dynamic two dimensional array, load it with some elements and show them on screen

    return 0;
}


