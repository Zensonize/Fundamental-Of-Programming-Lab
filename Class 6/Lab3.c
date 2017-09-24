#include <stdio.h>
#include <math.h>

int main() {
    int value,lines;
    scanf("%d",&value);

    if(value%2 == 1) lines = value+1;
    else lines = value;
    
    int a,b,spc,nums;
    for(a=1;a<=lines;a++){
        spc = abs(a-(lines/2));

        for(b=0;b<spc;b++){
            printf(" ");
        }

        nums = value - spc*2;
        for(b=0;b<nums;b++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}