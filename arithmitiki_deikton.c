/**
Programma gia katanoisi arithmitikis deikton
*/

# include <stdio.h>
#include <string.h>


int main() {
    char *onoma = "sofia";
    printf("\n%c", *onoma);
    printf("\n%c", onoma[0]);
    onoma++;
    printf("\n%c", *onoma);
    printf("\n%c", onoma[0]);
    onoma--;
    printf("\n%c", *onoma);
    printf("\n%c", onoma[0]);
}
