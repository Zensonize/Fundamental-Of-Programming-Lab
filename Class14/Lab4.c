#include <stdio.h>

struct Date{
    int month;
    int day;
    int year;
};

int days(struct Date indate){
    int sum = 0;
    sum = 30*(indate.month-1) + indate.day + 360*(indate.year-2010);
    return sum;
}
int main() {
    struct Date mybd;
    printf("dd/mm/yyyy : ");
    scanf("%d/%d/%d",&mybd.day,&mybd.month,&mybd.year);
    printf("day : %d",days(mybd));
}