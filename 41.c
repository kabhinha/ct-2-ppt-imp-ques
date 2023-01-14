#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }printf("\n");
    }
    i--;
    while(i--) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }printf("\n");
    }
    return 0;
}