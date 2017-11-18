#include <stdio.h>

double calculator(double a,double b,double c,double d,double e){
    return 2*a + b - c + a*d + a/e;
}

int main() {
    double a,b,c,d,e;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    printf("%f",calculator(a,b,c,d,e));
}