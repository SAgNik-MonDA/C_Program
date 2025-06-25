#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the size of array:\t");
    scanf("%d",&n);
int a[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("orginal array elements are:\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(j=0;j<=n-2;j++){
            if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    printf("\n");
 printf("sorted array elements are:\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
return 0;
}

