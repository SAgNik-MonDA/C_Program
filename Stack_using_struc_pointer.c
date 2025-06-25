#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct stack
{
    
    int data[SIZE];
    int top;
};
 void initialize(struct stack *s)
{
    s->top = -1;
}
int isfull(struct stack *s)
{
    return s->top == SIZE - 1;
}

int isempty(struct stack *s)
{
    return s->top == -1;
}
void push(struct stack *s, int value)
{
    if (isfull(s))
    {
        printf("stack is overflow!");
    }
    else
    {
        s->data[++(s->top)] = value;
        printf("%d pushed on to the stack\n", value);
    }
}
int pop(struct stack *s)
{
    if (isempty(s))
    {
        printf("stack is underflow !");
        return -1;
    }
    else
    {
     return s->data[(s->top)--];    
    }
}
void display(struct stack *s){
    if(isempty(s)){
        printf("Stack is empty !\n");
    }
    else{
        printf("stack element are\n");
        for(int i=s->top;i>=0;i--){
            printf("%d",s->data[i]);
        }
    }
}


int main(){
    struct stack s;
    initialize(&s);

    int choice, value;

while(1){
     printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(&s, value);
            break;
        case 2:
            value = pop(&s);
            if (value != -1) {
                printf("Popped value: %d\n", value);
            }
            break;
        case 3:
            display(&s);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}