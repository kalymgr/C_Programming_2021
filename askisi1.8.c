/**
Askisi 1.8

How to use structs
The program will allow the user to choose whether he will type the students data
or he will load them from a file.
Also, in the end, the user will be given the choice to save the students data in a file.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define N 8
#define DEFAULTSIZE 256

typedef struct  {
    char onoma[50];
    char epitheto[50];
    char ar_mitroou[50];
    float mo;
} foititis;

void gemismaPinaka(foititis *foitites);
void ektyposiPinaka(foititis *foitites);
void fortosiPinakaApoArxeio(foititis *foitites, char *fileName);
void apothikefsiPinakaSeArxeio(foititis *foitites, char *fileName);

int main()
{
    foititis foitites[N];
    int choice;
    char fileName[50];
    do {
        printf("\nWould you like to type the students data (1) or load them from a file (2)?");
        scanf("%d" , &choice);
    } while ((choice <1) || (choice>2));
    if (choice == 1)
        gemismaPinaka(foitites);
    else {
        printf("\nPlease, give the name of the file:");
        scanf("%s", fileName);
        fortosiPinakaApoArxeio(foitites, fileName);

    }

    ektyposiPinaka(foitites);
    char choice2[5];
    do {
        printf("\nWould you like to save the students data in a file (Yes/No)?");
        scanf("%s", choice2);
    } while ((strcmp(choice2,"Yes")!=0) && (strcmp(choice2,"No")!=0));
    if (strcmp(choice2,"Yes")==0)  // the answer is yes
    {
        printf("\nPlease, give the name of the file where the data will be saved: ");
        scanf("%s", fileName);
        apothikefsiPinakaSeArxeio(foitites, fileName);
    }
    printf("\n----------------------");
    printf("\n Thank you for everything. Bye Bye :-)");
    printf("\n----------------------");
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

/**
Function that loads students data from a file
*/
void fortosiPinakaApoArxeio(foititis *foitites, char *fileName){

    // open the file
    FILE *fp = fopen(fileName,"r");
    if (fp == NULL)  // problem opening the file
    {
        printf("Error: could not open file %s", fileName);
        exit(0); // exit the process
    }

    // read the file contents and load them in the foitites struct
    char fileLine[DEFAULTSIZE];

    char *token;
    int i=0;
    while (fgets(fileLine, DEFAULTSIZE, fp) != NULL) {  // for each line of the file
        // split line to tokens
        const char delimiter[2] = " ";
        token = strtok(fileLine, delimiter);
        strcpy(foitites[i].onoma, token);
        token = strtok(NULL, delimiter);
        strcpy(foitites[i].epitheto, token);
        token = strtok(NULL, delimiter);
        strcpy(foitites[i].ar_mitroou, token);
        token = strtok(NULL, delimiter);
        foitites[i].mo = atof(token);
        i++;
    }

    // close the file
    fclose(fp);
}

/**
* Synartisi pou apothikevei ta stoixeia foititon se arxeio
Dexetai os parametro pinaka pou periexei structs me stoixeia
foititon
*/
void apothikefsiPinakaSeArxeio(foititis *foitites, char *fileName) {
    FILE *fp = fopen(fileName,"w"); // create file for writing
    if (fp == NULL) {
        printf("Error: could not open file %s", fileName);
        exit(0); // exit the process
    }

    fputs("---NEOS PINAKAS ME FOITITES---\n", fp);
    // for each student (foititis), write his/her info on the file
    int i;
    char stringMo[10];
    for (i=0;i<8;i++) {
        // create the string line for the student
        char stringLine[DEFAULTSIZE];
        strcpy(stringLine, "");
        strcat(stringLine,foitites[i].onoma);
        strcat(stringLine," ");
        strcat(stringLine,foitites[i].epitheto);
        strcat(stringLine," ");
        strcat(stringLine,foitites[i].ar_mitroou);
        strcat(stringLine," ");
        gcvt(foitites[i].mo, 5, stringMo);  // convert mo to string
        strcat(stringLine,stringMo);
        strcat(stringLine,"\n");

        // write the line to the file
        fputs(stringLine, fp);

    }
    printf("\n Students data succesfully saved in file %s",fileName);

    // close the file
    fclose(fp);
}
