#include <stdio.h>

int a;
float b;
double c;

void check() {
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Enter a floating number: ");
    scanf("%f",&b);
    printf("Enter a double precison number: ");
    scanf("%lf",&c);
}

int main() {
    check();
    printf("\nThe integer is: %d\n",a);
    printf("The floating point number is: %f\n",b);
    printf("The double precision number is: %f\n",c);
}