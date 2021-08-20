/**
Program that shows how to handle text files (read, write)
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 256

int main()
{

    // First, open a file for reading (one character at a time)
    char fileName[100];
    printf("\nPlease, give the name of the file you want to read:");
    gets(fileName);

    // open the file
    FILE *fp = fopen(fileName,"r");
    if (fp == NULL)  // problem opening the file, maybe the file does not exist
    {
        printf("Error: could not open file %s", fileName);
        exit(0); // exit the process
    }

    // Read the file, character per character
    // Show the contents on screen,separated by space character
    printf("\n---One character at a time---\n");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c ",ch);
    }

    // close the file
    fclose(fp);

    // Open a file for reading one line at a time
    printf("\nPlease, give the name of the file  you want to read:");
    gets(fileName);

    fp = fopen(fileName,"r");
    if (fp==NULL) {  // if error when opening the file
        printf("/nError opening file");
        exit(0);
    }
    // show file contents, one line at a time
    char textLine[MAX_LENGTH];
    while (fgets(textLine, MAX_LENGTH, fp)) {
        printf("%s", textLine);
        printf("---\n");
    }

    // close the file
    fclose(fp);

    // Open a file for writing
    printf("\nPlease, give the name of the file, you want to write to:");
    gets(fileName);
    // open the file for writing. If it exists, overwrite the existing content
    fp = fopen(fileName, "w");

    char text[100];
    printf("\nGive the text you want to write in the file:");
    gets( text);
    // write the text in the file
    int result = fputs(text, fp);
    if (result >= 0)
        printf("\nFile successfully created!");
    else
        printf("\nProblem creating the file");
    // close the file
    fclose(fp);

    return 0;
}



