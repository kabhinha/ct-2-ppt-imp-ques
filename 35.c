#include<stdio.h>

struct date {
    char day[15];
    int date;
    int month;
    int year;
};

int main() {
    struct date d1, d2;
    printf("Enter date 1 ");
    scanf("%d-%d-%d: %s", &d1.date, &d1.month, &d1.year, &d1.day);
    printf("Enter date 2 ");
    scanf("%d-%d-%d: %s", &d2.date, &d2.month, &d2.year, &d2.day);
    if((d1.date==d2.date)&&(d1.month==d2.month)&&(d1.year==d2.year)&&(d1.day==d2.day)) {
        printf("Equal");
    } else {
        printf("Unequal");
    }
}