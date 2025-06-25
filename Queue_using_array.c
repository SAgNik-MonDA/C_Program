#include<stdio.h>
#include<stdlib.h>
int n,i;
int queue[100];
int front=-1,rear=-1;
void enqueue(){
    int x;
    printf("enter element you want to insert :\t");
    scanf("%d",&x);
    if(rear==n-1){
        printf("queue is overflow !!!\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
 printf("Inserted %d into the queue.\n", x);
    }
    else{
        rear++;
        queue[rear]=x;
 printf("Inserted %d into the queue.\n", x);
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("queue is empty !!!\n");
    }
    else if(front ==rear){
         printf("Deleted item is:\t%d\n", queue[front]);
        front =rear=-1;
    }
    else{
        printf(" deleted item is:\t%d",queue[front]);
        front++;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("queue is empty !!!\n");
    }
 printf(" elements in queue are\n");
    for(i=front;i<rear+1;i++){
        printf(" %d\t",queue[i]);
    }
}

int main(){
        printf("Enter the size of the queue: ");
    scanf("%d", &n);
        int ch;
        while(1){
        printf("\nqueue menu:\n");
        printf("1.enqueue :\n");
        printf("2.dequeue :\n");
        printf("3.display :\n");
        printf("4. Exit\n");
        printf("enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
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
