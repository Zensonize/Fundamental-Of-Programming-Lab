#include <stdio.h>

int main() {
    double number;
    PRINT:printf("Enter a number:");
    scanf("%lf",&number);
    if(number < 0.0){
        printf("number is negative\n");
        goto PRINT;
    }
    else
        printf("number is positive\n");

    return 0;
}