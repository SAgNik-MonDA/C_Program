 #include<stdio.h>
 int main(){
    int i,n;
    printf("Enter array size");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];

            j--; 
        }
        a[j+1]=temp;
    }
    
    printf("sorted array");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
 }
 }