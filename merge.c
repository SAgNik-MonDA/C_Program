#include<stdio.h>
int main(){
    int a1[10],a2[10],a3[20];
    int i,n1,n2,m,index=0;
    printf("enter the size of array1 ");
    scanf("%d",&n1);
    printf("enter the elements of array1 ");
    for(i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }

    printf("enter the size of array2 ");
    scanf("%d",&n2);
    printf("enter the elements of array2 ");
    for(i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }
    m=n1+n2;
    for(i=0;i<n1;i++){
        a3[index]=a1[i];
        index++;
    }
   for(i=0;i<n2;i++){
        a3[index]=a2[i];
        index++;
    }
    printf("the merged array is\n");
    for(i=0;i<m;i++){
        printf("%d\t",a3[i]);
    }

    return 0;
}