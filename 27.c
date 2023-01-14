#include<stdio.h>

int main() {
    int n, c=0;
    scanf("%d", &n);
    for(int i=65; i<65+n; i++) {
        for(int j=65; j<i; j++) {
            printf("%c ", c++ +65);
        } printf("\n");
    }
    return 0;
}