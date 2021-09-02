/**
Program that reads content of a text file, shows it on screen and then writes it on another file
**/


#include <stdio.h>
#include <stdlib.h>


#define DEFAULTSIZE 256


/*
open file and read content.
while reading each line, show line on screen and save line on another file
*/

int main() {
    char fileName[50];
    char fileName2[50];
    // open file for reading
    printf("\nPlease, give the name of the file you want to read from : ");
    scanf("%s", fileName);
    FILE *fp = fopen(fileName,"r");
    if (fp == NULL)  // problem opening the file
    {
        printf("Error: could not open file %s", fileName);
        exit(0); // exit the process
    }

    // open file for writing (create)
    printf("\nPlease, give the name of the file you want to write to : ");
    scanf("%s", fileName2);
    FILE *fp2 = fopen(fileName2,"w");
    if (fp == NULL)  // problem opening the file
    {
        printf("Error: could not open file %s", fileName2);
        exit(0); // exit the process
    }

    printf("\n\nContent of \'%s\':\n\n",fileName);  // show two empty lines on screen

    //get each line, show it on screen and save it on the new file
    char fileLine[DEFAULTSIZE];
    while (fgets(fileLine, DEFAULTSIZE, fp) != NULL) {  // for each line of the file
        printf("%s", fileLine);
        fputs(fileLine, fp2);
    }

    printf("\n\nFile \'%s\'successfully created!\n\n",fileName2);
    // close files
    fclose(fp);
    fclose(fp2);

    // end main
    return 0;
}
