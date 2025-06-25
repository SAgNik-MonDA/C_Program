#include <stdio.h>
int main() {
    int a[20], i, p, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position of the element to delete : ");
    scanf("%d", &p);
    if (p < 1 || p > n-1) {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = p - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    printf("The elements of the array after deletion are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}
