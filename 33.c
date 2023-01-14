#include<stdio.h>

int main() {
    char str[100], t;
    int c=-1;
    gets(str);
    puts(str);
    // calculate length
    for(int i=0; str[i]!='\0'; i++) {
        c++;
    }
    // reverse string
    for(int i=0; i<c;i++) {
        t = str[i];
        str[i] = str[c-i];
        str[c-i] = t;
    }
    puts(str);
    return 0;

}