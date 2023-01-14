#include<stdio.h>

int main() {
    char str[100];
    int chars=0, words=1, spaces=0, nlines=0;
    gets(str);
    for(int i=0; str[i]!='\0'; i++) {
        chars++;
        if(str[i]==' ') {
            spaces++;
            if(str[i]!=str[i+1]) {
                words++;
            }
        }
        if(str[i]=='\n') {
            nlines++;
        }
    }
    printf("chars: %d\nWords: %d\nSpaces: %d\nnlines: %d", chars, words, spaces, nlines);
    return 0;
}