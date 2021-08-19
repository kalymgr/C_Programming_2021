/**
Askisi 1.7
*/
#include <stdio.h>

#define N 8

typedef struct  {
    char onoma[50];
    char epitheto[50];
    char ar_mitroou[50];
    float mo;
} foititis;

void gemismaPinaka(foititis *foitites);
void ektyposiPinaka(foititis *foitites);

int main()
{
    foititis foitites[N];
    gemismaPinaka(foitites);
    ektyposiPinaka(foitites);
    return 0;
}

/**
Synartisi pou gemizei ton pinaka me tous foitites
*/
void gemismaPinaka(foititis *foitites) {
    int i;
    for (i=0;i<N;i++) {
        printf("\nDose to onoma: ");
        scanf("%s",foitites[i].onoma);
        printf("\nDose to epitheto: ");
        scanf("%s",foitites[i].epitheto);
        printf("\nDose ton arithmo mitroou: ");
        scanf("%s",foitites[i].ar_mitroou);
        printf("\nDose to mo: ");
        scanf("%f", &foitites[i].mo);
    }
}


/**
Synartisi pou ektyponei ton pinaka me tous foitites
*/
void ektyposiPinaka(foititis *foitites)
{
    printf("\nAa\t\tOnoma\t\tEpitheto\t\tAr. Mitroou\t\tVathmos\n");
    printf("---------------------------------------------------------------------------------\n");
    int i;
    for (i=0;i<N;i++) {
        printf("%d\t\t",i+1);
        printf("%s\t\t",foitites[i].onoma);
        printf("%s\t\t",foitites[i].epitheto);
        printf("%s\t\t",foitites[i].ar_mitroou);
        printf("%f\n", foitites[i].mo);
    }
}

