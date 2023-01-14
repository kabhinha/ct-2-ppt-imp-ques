#include <stdio.h>

int main() {
    char name[100], count=0;
    fgets(name, 100, stdin);
    for(int i = 0; name[i]!='\0'; i++) {
        count++;
    }
    printf("Length of the string is: %d", (count-1));
    return 0;
}