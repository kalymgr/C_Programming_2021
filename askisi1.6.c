/**
Askisi 1.6
ASCII Table: https://www.asciitable.com/
*/
#include <stdio.h>

int main()
{
    char ch;
    printf("\nPliktrologise to keimeno kai meta Enter h Ctrl+Z gia telos:");
    while ((ch=getchar()) != EOF) {
        if ((ch!=EOF) && (ch != '\n') && (ch != '.') && (ch != ','))
        {
            if ((ch >= '0') && (ch <= '8'))
                putchar(ch+1);
            else if (ch == '9')
                putchar(ch-9);
            else if ((ch == '*') || (ch=='/') || (ch == '+') || (ch == '-'))
                putchar(' ');
            else
                putchar(ch);
        }
    }
    return 0;
}

