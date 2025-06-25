#include<stdio.h>
#include<limits.h>
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
    for(i=0;i<n-1;i++){
        int min=INT_MAX;
        int minindx=-1;
        for(int j=i;j<=n-1;j++){
            if(min>a[j]){
                min=a[j];
                minindx=j;
            }
        }
    int temp=a[minindx];
    a[minindx]=a[i];
    a[i]=temp;
    }
    printf("\n");
 printf("sorted array elements are:\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
return 0;
}

