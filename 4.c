#include<stdio.h>

int main() {
    int arr[100], n, m, e, v, s=0, f=0;
    printf("Enter Target: ");
    scanf("%d", &v);
    printf("Enter length: ");
    scanf("%d", &n);
    e = n-1;
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    m = (s+e)/2;
    while(m>-1) {
        if(arr[m]>v) {
            e = m-1;
        } else if(arr[m]<v) {
            s = m+1;
        } else {
            f=1;
            break;
        }
        m = (s+r)/2;
    }
    if(f==1) {
        printf("Found");
    } else {
        printf("not Found");
    }
    return 0;
}
