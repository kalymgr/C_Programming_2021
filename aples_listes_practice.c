/**
Code just to practice singly linked lists
*/


#include <stdio.h>
#include <string.h>

/**
Define a struct named info, that stores address info for some people
*/
 typedef struct {
    char onoma[10];
    char epith[10];
    char odos[30];
    int birthyear;
    struct address *next;  // link to the next element of the list
}address;


void slstore( address *i,  address *last);

int main() {
    // create a new address
    address info;
    strcpy(info.onoma,"stamatis");
    strcpy(info.epith, "gardelis");
    strcpy(info.odos,"xora");
    info.birthyear = 1;
    // store the new address in the list
    slstore(&info,NULL);

    // create one more address
    address info2;
    strcpy(info2.onoma,"giannis");
    strcpy(info2.epith, "agiannis");
    strcpy(info2.odos,"xora");
    info2.birthyear = 1;

    slstore(&info2, &info);

    return 0;
}

/**
Function that stores a new element in the list
Parameters: the node (address) that will be added, the last node (address) of the list, if exists
*/
void slstore( address *i,  address *last) {

    if (last)
        (last)->next = i;
    i-> next  = NULL;
    last = i;
}


