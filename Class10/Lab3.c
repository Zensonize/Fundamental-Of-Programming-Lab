#include <stdio.h>

double extend(double a,double b){
    double value;
    value =  a*b;
    return value;
}

int main() {
    double price[10] = {10.62,14.89,13.21,16.55,18.62,93.47,6.58,18.32,12.15,3.98}; 
    double quantity[10] = {1,2,3,4,5,6,7,8,9,10};
    double amount[10];
    int i;
    for(i=0;i<10;i++){
        amount[i] = extend(price[i],quantity[i]);
        printf("%.2f\n",amount[i]);
    }
}
