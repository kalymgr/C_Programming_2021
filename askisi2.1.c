/**
Program that show a menu.
Practicing switch
*/

#include <stdio.h>


int main() {
    int choice;
    do {
        // show menu items
        printf("\n%s", "1.Eisagogi");
        printf("\n%s", "2.Diagrafi");
        printf("\n%s", "3.Emfanisi");
        printf("\n%s", "4.Anazitisi");
        printf("\n%s", "0.Eksodos\n");

        // get user choice

        scanf("%d",&choice);

        // show a message
        switch (choice) {
        case 1:
            printf("\nPame gia eisagogi");
            break;
        case 2:
            printf("\nPame gia diagrafi");
            break;
        case 3:
            printf("\nPame gia emfanisi");
            break;
        case 4:
            printf("\nPame gia anazitisi");
            break;
        case 0:
            printf("\nTime to leave...");
            break;
        default:
            printf("\n Wrong choice. Try again!");
        }
    }
    while (choice!=0);
    return 0;
}
