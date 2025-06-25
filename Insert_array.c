#include<stdio.h>
int main(){
    int i,n,e,p,a[20];
    printf("enter the size of array\t");
    scanf("%d",&n);
    if(n<1||n>20){
        printf("invalid");
    }
    else{
    printf("enter the element of array\t");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("enter the position of array to insert\t");
    scanf("%d",&p);
    if(p<1||p>n-1){
        printf("invalid");
    }
    else{
    printf("enter the element of array to insert\t");
    scanf("%d",&e);
    for(i=n-1;i>=p-1;i--){
        a[i+1]=a[i];
    }
        a[p-1]=e;
        printf("The elements of the array after insertation are:\n");
    for(i=0;i<=n;i++){
        printf("%d \t",a[i]);
    }
    }
    }
}