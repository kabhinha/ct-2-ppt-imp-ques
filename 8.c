#include<stdio.h>

int main() {
    int a[100][100], b[100][100], c[100][100] = {0}, r1, r2, c1, c2;
    printf("Enter size: ");
    scanf("%d %d %d %d", &r1, &r2, &c1, &c2);
    if(r2==c1) {
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c1; j++ ) {
                printf("Enter element of  matrix 1's %d row and %d col: \n", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for(int i=0; i<r2; i++) {
            for(int j=0; j<c2; j++ ) {
                printf("Enter element of  matrix 2's %d row and %d col: \n", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++) {
                for(int k=0; k<r1; k++) {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        printf("Result\n");
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++) {
                printf("%d ", c[i][j]);
                }
            printf("\n");
            }
        }else {
        printf("Not possible");
    }
    return 0;
}