#include <stdio.h>

int main (){
    double data[500],a=0,sum=0;
    int index=0;
    while (1){
        scanf("%lf",&a);
        if(a<0) break;
        data[index++] = a;
        sum = sum+a;
    }
    printf("%f",sum/index);
}