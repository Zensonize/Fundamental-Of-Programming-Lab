#include <stdio.h>
#include <math.h>

double f(double x){
    return pow(x,2) + 2*x - 5;
}

double g(double x){
    return pow(x,3) - 9*x - 1;
}

double h(double x){
    return 2*pow(x,2) + x - 12;
}

int main(){
    char a,b;
    double data;
    scanf(" %co%c",&a,&b);
    scanf("%lf",&data);
    a == 'f' ?
        b == 'f' ? printf("%f",f(f(data))) :
        b == 'g' ? printf("%f",f(g(data))) : printf("%f",f(h(data))) :
    a == 'g' ?
        b == 'f' ? printf("%f",g(f(data))) :
        b == 'g' ? printf("%f",g(g(data))) : printf("%f",g(h(data))) :
    //a == 'h' ?
        b == 'f' ? printf("%f",h(f(data))) :
        b == 'g' ? printf("%f",h(g(data))) : printf("%f",h(h(data)));
}