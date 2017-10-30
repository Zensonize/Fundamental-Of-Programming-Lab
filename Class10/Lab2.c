#include <stdio.h>
#include <math.h>

double distance(int x1,int x2,int y1, int y2) {
    return pow(pow(x2-x1,2) + pow(y2-y1,2),0.5);
}

int main() {
    int a,b,c,d;
    printf("Please enter value for x1: ");
    scanf("%d",&a);
    printf("Please enter value for y1: ");
    scanf("%d",&b);
    printf("Please enter value for x2: ");
    scanf("%d",&c);
    printf("Please enter value for y2: ");
    scanf("%d",&d);
    printf("The distance between the points is: %f",distance(a,c,b,d));
}