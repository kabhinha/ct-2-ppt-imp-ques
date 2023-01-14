#include<stdio.h>

struct emp {
    char name[100];
    float sal;
    char city[100];
    int code;
    char dept[10];
    char desig[100];
};

int main() {
    struct emp emps[1];
    for(int i=0; i<1; i++) {
        printf("Name ");
        gets(emps[i].name);
        printf("City ");
        gets(emps[i].city);
        printf("Dept ");
        gets(emps[i].dept);
        printf("Desi g");
        gets(emps[i].desig);
        printf("Salary ");
        scanf("%f", &emps[i].sal);
    }
    for(int i=0; i<1; i++) {
        if(emps[i].sal>20000) {
            printf("Name ");
            puts(emps[i].name);
            printf("City ");
            puts(emps[i].city);
            printf("Dept ");
            puts(emps[i].dept);
            printf("Dept ");
            puts(emps[i].desig);
            printf("Salary ");
            printf("%f", emps[i].sal);
        }
    }
    return 0;
}
