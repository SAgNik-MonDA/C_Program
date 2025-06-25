#include<stdio.h>
#include<stdlib.h>
int top=-1,n;
  int stack[100];
    void push(){
        int x;
        printf("enter item you want to push :\t");
        scanf("%d",&x);
        if(top==n-1){
            printf("Stack is overflow");
        }
        else{
            top++;
            stack[top]=x;
             printf("%d pushed onto the stack.\n", x);
        }
    }

void pop(){
    int y;
    if(top==-1){
        printf("Stack is underflow");
    }
    else{
        y=stack[top];
        top--;
        printf("deleted item is %d",y);
    }
}
void display(){
     printf("The elements in the stack are:\n");
    for(int i=top;i>=0;i--){
        printf("%d\t",stack[i]);
    }
}
    int main(){
        printf("Enter the size of the stack: ");
    scanf("%d", &n);
        int ch;
        while(1){
        printf("\nStack menu:\n");
        printf("1.push :\n");
        printf("2.pop :\n");
        printf("3.display :\n");
        printf("4. Exit\n");
        printf("enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
             case 4:
                printf("Exiting program.\n");
                exit(0);
            default :
            printf("invalid choice\n");
        }
        }
    return 0;
}

