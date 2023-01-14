#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}, s=0;

    for (int i=0; i<(sizeof(arr)/sizeof(int)); i++) {
        s += arr[i];
    }
    printf("Sum: %d\nAvg.: %.2f", s, (float)(s/(sizeof(arr)/sizeof(int))));
    return 0;
}