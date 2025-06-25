// // insert element in array

// #include<stdio.h>
// int main(){
//     int i,n,e,p,a[20];
//     printf("enter the size of array ");
//     scanf("%d",&n);
//     if(n<1||n>20){
//         printf("invalid");
//     }
//     else{
//     printf("enter the elements of array");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("enter the element you want to insert \t");
//     scanf("%d",&e);
//     printf("enter the position you want to insert \t");
//     scanf("%d",&p);
//     if(p<1||p>n-1){
//         printf("invalid position");
//     }
//     else{
//         for(i=n-1;i>=p-1;i--){
//             a[i+1]=a[i];
//         }
    
//     a[p-1]=e;
//     n++;
//     printf("elements in array are\t");
//     for(i=0;i<n;i++){
//         printf("%d \t",a[i]);
//     }
//     }
//     return 0;
//     } 
// }

// delete array
// #include<stdio.h>
// int main(){
//     int i,n,p,a[20];
//     printf("enter the size of array ");
//     scanf("%d",&n);
//     if(n<1 || n>20){
//         printf("invalid!!!");
//     }
//     else{
//         printf("enter the elements of array");
//         for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         }
//         printf("enter the position you want to delete");
//         scanf("%d",&p);
//         if(p<1||p>n-1){
//             printf("invalid !!!");
//         }
//         else{
//             for(i=p-1;i<=n-1;i++){
//                 a[i]=a[i+1];
//             }
//             n--; 
//         printf("elements in array are ");
//         for(i=0;i<n;i++){
//             printf("%d\t",a[i]);
//         }
//         }

//     }
// }

// Binary search
// #include<stdio.h>
// int main(){
//     int n, i,s=0,e=4,a[5],mid,item;
//     printf("enter the elements of array ");
//     for(i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("enter the item you want to search ");
//     scanf("%d",&item);
//     while(s<=e){
//         mid=(s+e)/2;
//         if(a[mid]==item){
//             printf("item found\n");
//             printf("index is \t %d",a[i]);
//             break;
//         }
//         else if(a[mid]<item){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     if(a[mid]!=item){
//         printf("item not found");
//     }
    
// }

// linear search
// #include<stdio.h>
// int main(){
//     int i,n,a[20],s,f=0;
//     printf("enter the size of array ");
//     scanf("%d",&n);
//     printf("enter the array element");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the element you want to search ");
//     scanf("%d",&s);
//     for(i=0;i<n;i++){
//         if(s==a[i]){
//             printf("item found");
//             printf("index is %d",a[i]);
//             f=1;
//             break;
//         }
//     }
//     if(f==0){
//         printf("item not found");
//     }
// }

// traverse
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("enter the size of array ");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter the array element");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("array elements are\n ");
//     for(i=0;i<n;i++){
//         printf("%d index is %d\t\n",i+1,a[i]);
//     }
// }

// // stack using array
// #include<stdio.h>
// #include<stdlib.h>
// int top=-1,n,i;
// int stack[100];
// void push(){
//     int x;
//     printf("enter the value you want to insert ");
//     scanf("%d",&x);
//     if(top==n-1){
//         printf("Stack is overflow");
//     }
//     else{
//         top++;
//         stack[top]=x;
//          printf("%d pushed onto the stack.\n", x);
//     }
// }
// void pop(){
//     int y;
//     if(top==-1){
//         printf("Stack is empty");
//     }
//     else{
//        y=stack[top];
//        top--;
//        printf("deleted item is %d",y);
//     }
// }
// void display(){
//     printf("The elements in the stack are:\n");
//         for(i=top;i>=0;i--){
//             printf("array elements are %d\t",stack[i]);
//         }
//     }

// int main(){
//     printf("enter the size of array ");
//     scanf("%d",&n);
//     while(1){
//         printf("\nstack menu \n");
//                 printf("1.push \n");
//         printf("2.pop \n");
//                 printf("3.display \n");
//         printf("4.exit \n");
//     int ch;
//     printf("enter your choice");
//     scanf("%d",&ch);
//     switch(ch){
//         case 1:
//         push();
//         break;
//         case 2:
//         pop();
//         break;
//         case 3:
//         display();
//         break;
//         case 4:
//         printf("exit program");
//         exit(0);
//         break;
//         default:
//         printf("invalid choice");
//     }

//     }
// }

// #stack using structure
// #include<stdio.h>
// #include<stdlib.h>
// #define size 5
// int value;
// struct stack
// {
//     int data[size];
//     int top;
// };
// void initialize(struct stack*s){
//     s->top=-1;
// }
// int Isful(struct stack *s){
//     return (s->top==size-1);
     
// }
// int Isempty(struct stack *s){
//     return (s->top==-1);
     
// }
// void push(struct stack *s,int value){
//     if(Isful(s)){
//         printf("stack is ful");
//     }
//     else{
//         s->data[++(s->top)]=value;
//           printf("%d pushed on to the stack\n", value);
//     }
// }
// int pop(struct stack*s){
//     if(Isempty(s)){
//         printf("stack is empty");
//     }
//     else{
//         s->data[(s->top)--];
//     }
// }

// void display(struct stack *s){
//     if(Isempty(s)){
//         printf("stack is empty");
//     }
//     else{
//          printf("stack element are\n");
//         for(int i=s->top;i>=0;i--){
//               printf("%d",s->data[i]);
//         }
//     }
// }
// int main(){
//      struct stack s;
//     initialize(&s);
//     while(1){
//      printf("\nStack Operations Menu:\n");
//         printf("1. Push\n");
//         printf("2. Pop\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         int choice;
//         scanf("%d", &choice);

//         switch (choice) {
//         case 1:
//             printf("Enter value to push: ");
//             scanf("%d", &value);
//             push(&s, value);
//             break;
//         case 2:
//             value = pop(&s);
//             if (value != -1) {
//                 printf("Popped value: %d\n", value);
//             }
//             break;
//         case 3:
//             display(&s);
//             break;
//         case 4:
//             printf("Exiting...\n");
//             break;
//         default:
//             printf("Invalid choice! Please try again.\n");
//         }
//     }
//     return 0;
// }

