#include<stdio.h>

int main() {
    int a[4][4], tmax, tmin, rmax, rmin;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    tmax = a[0][0];
    tmin = a[0][0];
    rmax = a[0][0];
    rmin = a[0][0];
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            if(tmax<a[i][j]) {
                tmax = a[i][j];
            }
            if(tmin>a[i][j]) {
                tmin = a[i][j];
            }
        }
    }
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if((rmax<a[i][j])&&(a[i][j]<tmax)) {
                rmax = a[i][j];
                printf("%d", rmax);
            }
            if((rmin>a[i][j]&&(a[i][j]>tmin))) {
                rmin = a[i][j];
            }
        }
    }
    

    printf("\nMax: %d\nMin: %d", rmax, rmin);
    return 0;
}