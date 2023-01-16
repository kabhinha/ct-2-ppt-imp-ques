#include<stdio.h>

int main() {
    int a[100], b[100], c[100], n;
    printf("Enter size: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }
    for(int i=0; i<n; i++) {
        c[i]=a[i]+b[j];
    }
    printf("Sum:\n[")
    for(int i=0; i<n; i++) {
        printf("%d ", c[i]);
    }
    printf("]");
    return 0;
}