#include<stdio.h>
int main(){
    int arr[5],i;
    printf("enter array element\t");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("element presents at position %d %d\t\n",i+1,arr[i]);
    }
    return 0;
}