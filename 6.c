#include<stdio.h>

int main() {
    int a[100], b[100], n;
    printf("Enter size: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++) {
        b[n-i-1] = a[i];
    }
    printf("Reverse:\n[");
    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }
    printf("]");
    return 0;
}