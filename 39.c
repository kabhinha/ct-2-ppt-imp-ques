#include<stdio.h>
#include<string.h>

int main() {
    char str[100], temp[100], f=1;
    gets(str);
    strcpy(temp, str);
    strrev(str);
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]!=temp[i]) {
            f=0;
            break;
        }
    }
    if(f==1) {
        printf("Polidrome");
    } else {
        printf("Not polidrome");
    }
}