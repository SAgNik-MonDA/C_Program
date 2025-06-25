#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*front=0;
struct node*rear=0;
void enqueue(){
    int x;
    printf("enter the element you want to insert\t");
    scanf("%d",&x);
    struct node*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void display(){
    struct node*temp;
    if(front==0 && rear==0){
        printf("Queue is empty");
    }
    else{
        temp=front;
        while(temp !=0){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue(){
    struct node *temp;
    temp=front;
    if(front==0 && rear==0){
        printf("Queue is empty");
    }
    else{
        printf("deleted element is\t%d",front->data);
        front=front->next;
        free(temp);
    }
}
int main(){
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
