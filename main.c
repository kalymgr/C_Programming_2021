/**
Dynamic creation of two dimensional arrays

*/

# include <stdio.h>
#include <stdlib.h>

void create_array(int ***pinakas, int m, int n);

int main() {

    int **pinakas;
    create_array(&pinakas,3,2);

    int i,j;

    for (i=0;i<3;i++) {
        for (j=0;j<2;j++) {
            printf("\nDose ena stoixeio: ");
            // scanf("%d", pinakas[i][j]);
            pinakas[i][j] = 0;
        }
    }

    for (i=0;i<3;i++) {
        for (j=0;j<2;j++) {
            // printf("%d, pinakas[i][j]");
        }
    }


}

/**
* Function that dynamically creates two dimensional array
*/
void create_array(int ***pinakas, int m, int n)
{
    int i;
    pinakas = (int**) malloc(sizeof(int*) * m);
    if (!*pinakas)
    {
        printf("\n Error allocating memory to the array!");
        exit(0);
    }
     for (i=0; i<m; i++) {
        pinakas[i] = (int *) malloc(sizeof(int)*n);
        if(!pinakas[i]) {
            printf("\n Error allocating memory to the array!");
            exit(0);
        }
     }

}
