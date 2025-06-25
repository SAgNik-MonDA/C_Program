#include <stdio.h>

int main() {
    int i, arr[5], s, f = 0;  
    printf("Enter 5 array elements:\t");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search:\t");
    scanf("%d", &s);
    for (i = 0; i < 5; i++) {
        if (s == arr[i]) {
            printf("Element found at index %d\n", i);
            f = 1;  
            break;
        }
    }

   if(f==0) {
        printf("Element not found\n");
    }

    return 0;
}
