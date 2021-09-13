/*
Program that uses stack data structure to test if an arithmetic expression
using parentheses ( () ), brackets ( [] ) and {}  is valid
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

int evaluateExpression(char expression[100]);

int main()
{
    // get the expression from the keyboard
    printf("\nPlease, type the expression: ");
    char expression[100];
    scanf("%s", expression);

    if (evaluateExpression(expression) == 0)
        printf("\nThe expression is valid");
    else
        printf("\nThe expression is not valid");
    return 0;
}


/*
Function that get an arithmetic expression as a parameter and checks if it is valid.
If valid it returns 0, else it returns -1
How it works: If the character is ( or [ or {, it pushes it in the stack.
            If the character is ) or ] or }, it checks if the top element in the stack is its other half
            eg ( for ). If not, it returns -1. If yes, it pops the element and continues

*/
int evaluateExpression(char expression[100])
{
    stack s;  // stack that stores (, [, {
    s.top = -1;  // initialize top index - empty stack

    // for each character of the expression till end of string
    int i=0;
    while (expression[i] != '\0') {
        if ((expression[i] == '(') || (expression[i] == '[') || (expression[i] == '{'))
            push(&s,expression[i]);
        else if ((expression[i] == ')') || (expression[i] == ']') || (expression[i] == '}'))
        {
            if (isEmpty(&s)==0)  // if stack is empty, then problem. Return -1
                return -1;
            if (expression[i] == ')'){
                if (stackTop(&s) != '(')
                    return -1;
                else pop(&s);
            }
            else if (expression[i] == ']') {
                if (stackTop(&s) != '[')
                    return -1;
                else pop(&s);
            }
            else if (expression[i] == '}') {
                if (stackTop(&s) != '{')
                    return -1;
                else pop(&s);
            }
        }
        i++;
    }
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
