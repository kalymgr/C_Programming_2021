/**
* Program to show how a stack works
*/

#include <stdio.h>

#define STACKSIZE  100


// struct for storing stack elements
typedef struct {
    int top;
    int items[STACKSIZE];
} stack;

int pop(stack *s);
void push(stack *s, int x);
int isEmpty(stack *s);
int stackTop(stack *s);

int main() {
    stack s;
    s.top = -1;  // initialize top index - empty stack

    printf("\n !!! Welcome to our stack program !!!");

    int choice, element, empty, topItem;
    do {
        printf("\n\n----------");
        printf("\n---MENU---");
        printf("\n----------");
        printf("\n1.Push item");
        printf("\n2.Pop item");
        printf("\n3.Check if stack is empty");
        printf("\n4.Show top item");
        printf("\n0.Exit Program\n");
        printf("\nPlease, make your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nPlease, type the element you want to push: ");
            scanf("%d", &element);
            push(&s,element);
            printf("\nElement pushed!");
            break;
        case 2:
            element = pop(&s);
            printf("\nELement popped: %d",element);
            break;
        case 3:
            empty = isEmpty(&s);
            if (empty == 0)
                printf("\nStack is empty!");
            else
                printf("\nStack not empty!");
            break;
        case 4:
            topItem = stackTop(&s);
            printf("\nTop item is %d", topItem);
            break;
        case 0:
            printf("\nTime to go!!!");
            break;
        default:
            printf("\nWrong choice!");
        }
    } while (choice != 0);

    printf("\n---ENDING OUR FANTASTIC PROGRAM---");
    return 0;
}

/*
* Function that pushes element x into stack s. Checks if stack is full
*/
void push(stack *s, int x)
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
int pop(stack *s){
    int element;
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
int stackTop(stack *s){
    if (s->top == -1) // stack empty
    {
        printf("\nStack is empty!");
        exit(1);
    }
    else
        return s->items[s->top];
}




