#include<stdio.h>
#include<math.h>

int main() {
    int n, r=0;
    printf(" Enter the value of n\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=r*10+n%10;
        n/=10; // n=n/10

    }
    printf("%d",r);
    return 0;
}