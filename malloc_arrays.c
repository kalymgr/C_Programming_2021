/**
Program that shows the use of malloc (simple variables, arrays)
*/


# include <stdio.h>
#include <stdlib.h>
#include <string.h>


// define some constants
#define M 3
#define N 2


void create_array(int ***pinakas, int rows, int columns);


int main() {

    // create a simple char pointer
    char *ptr; // create the pointer
    ptr = malloc(1);  // allocate memory of 1 byte (1 character)
    *ptr = 'a';
    printf("\nThe character is: %c", *ptr);

    // create a char * pointer (string) for 50 characters
    char *name;  // create the pointer
    name = malloc(50);  // allocate memory of 50 bytes (50 characters)
    strcpy(name,"sofia");
    printf("\nThe text is: %s", name);

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
    printf("\nElements of one-dimensional array: ");  // show elements on screen
    for (i=0;i<M;i++)
        printf("%d, ",t[i]);

    // create a simple dynamic two dimensional array (MxN), load it with some elements and show them on screen
    int **u;  // create the two dimensional array pointer

    u = (int**) malloc(sizeof(int*) *M);  // allocate memory for M number of rows (M number of pointers)

    for (i=0;i<M;i++)
        u[i] = (int*) malloc(sizeof(int)*N);  // allocated memory for each row (each row contains N int elements)

    // load some elements in the array
    int j;
    for (i=0;i<M;i++){
        for (j=0;j<N;j++) {
            u[i][j] = rand();
        }
    }

    // print array elements on screen
    printf("\nElements of two dimensional array: ");

    for (i=0;i<M;i++){
        for (j=0;j<N;j++) {
            printf("%d, ",u[i][j]);
        }
    }

    // create a two dimensional array, by using a function
    int **pinakas;
    create_array(&pinakas, M, N);

    // load some random elements in the array
    for (i=0;i<M;i++){
        for (j=0;j<N;j++) {
            pinakas[i][j] = rand();
        }
    }
    // print array content on screen
    printf("\nElements of SECOND two dimensional array: ");
    for (i=0;i<M;i++){
        for (j=0;j<N;j++) {
            printf("%d, ", pinakas[i][j]);
        }
    }
    // free memory - TODO


    return 0;
}


/*
Function that initializes an array (allocates memory for the array)
It gets the pinakas parameter by reference, therefore it can allocate memory for the array that the main function
sends as parameter
*/
void create_array(int ***pinakas,int rows, int columns){
    *pinakas = (int**) malloc(sizeof(int*) *rows);  // allocate memory for <rows> number of rows (M number of pointers)

    int i;
    for (i=0;i<rows;i++)  // allocate memory for each column
        *pinakas[i] = (int*) malloc(sizeof(**pinakas[i])*columns);
}
