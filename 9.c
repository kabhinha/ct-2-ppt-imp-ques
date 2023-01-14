#include<stdio.h>

int main() {
    int a[4][4], max, min;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    min = a[0][0];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(max<a[i][j]) {
                max = a[i][j];
            }
            if(min>a[i][j]) {
                min = a[i][j];
            }
        }
    }
    printf("Max: %d\nMin: %d", max, min);
}