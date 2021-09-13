/*
Program that uses stack data structure to test if an arithmetic expression
using parentheses ( () ), brackets ( [] ) and {}  is valid
The program ends when one pushes Ctrl+Z and then presses enter

How it works: If the character is ( or [ or {, it pushes it in the stack.
            If the character is ) or ] or }, it checks if the top element in the stack is its other half
            eg ( for ). If not, it returns -1. If yes, it pops the element and continues
*/


#include <stdio.h>
#include <stdlib.h>

#define STACKSIZE  100


// struct for storing stack elements
typedef struct {
    int top;
    char items[STACKSIZE];
} stack;

char pop(stack *s);
void push(stack *s, char x);
int isEmpty(stack *s);
char stackTop(stack *s);


int main()
{
    // get the expression from the keyboard
    stack s;  // stack that stores (, [, {
    s.top = -1;  // initialize top index - empty stack
    int isValid = -1;
    printf("\nPlease, type the expression: ");
    char ch;
    while ((ch=fgetc(stdin)) != EOF)
    {
         if ((ch == '(') || (ch == '[') || (ch == '{'))
            push(&s,ch);
        else if ((ch == ')') || (ch == ']') || (ch == '}'))
        {
            if (isEmpty(&s)==0)  // if stack is empty, then problem. Return -1
                isValid = -1;
            if (ch == ')'){
                if (stackTop(&s) != '(')
                    isValid =  -1;
                else pop(&s);
            }
            else if (ch == ']') {
                if (stackTop(&s) != '[')
                    isValid =  -1;
                else pop(&s);
            }
            else if (ch == '}') {
                if (stackTop(&s) != '{')
                    isValid =  -1;
                else pop(&s);
            }
        }
    }
    if (isEmpty(&s)!=0)
        isValid = -1;
    else
        isValid = 0;

    if ( isValid == 0)
        printf("\nThe expression is valid");
    else
        printf("\nThe expression is not valid");

    return 0;
}


/*
* Function that pushes element x into stack s. Checks if stack is full
*/
void push(stack *s, char x)
{
    if (s->top < STACKSIZE-1) {  // if there is room in the stack
        s->top++;
        s->items[s->top] = x;
    }
    else {
        printf("\n%s", "Stack overflow!");
        exit(1);
    }
}

/*
* Function that pops element from stack. Check if stack is not empty
*/
char pop(stack *s){
    char element;
    if (s->top>-1) {  // if stack not empty
        element = s->items[s->top];
        s->top--;
        return element;
    }
    else {
        printf("\n%s", "Stack underflow!");
        exit(1);
    }
}

/*
* Function that check if stack is empty. If empty, returns 0, else -1
*/
int isEmpty(stack *s) {
    if (s->top == -1)
        return 0;
    else
        return -1;
}


/*
Function that returns the top element if stack not empty.
*/
char stackTop(stack *s){
    if (s->top == -1) // stack empty
    {
        printf("\nStack is empty!");
        exit(1);
    }
    else
        return s->items[s->top];
}
