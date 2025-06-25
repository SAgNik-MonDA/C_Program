#include<stdio.h>
int main(){
    int i;
    int arr[5];
    printf("Enter the array element\t");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the searched item\t");
    int data;
    scanf("%d",&data);
    int s=0,e=4,mid;
    while(s<=e){
    mid=(s+e)/2;
    if(arr[mid]==data){
        printf("element found\n");
        printf("index is %d",mid);
        break;
    }
    
    else if(arr[mid]<data){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    }
    if(arr[mid]!=data){
        printf("item not found");
    }
    return 0;
    
}