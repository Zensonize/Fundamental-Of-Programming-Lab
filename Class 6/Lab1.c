#include <stdio.h>

/*
void factorial(int num) {
    int result = 1,loop;
    if(num == 0){
        printf("%d! = %10d",num,1);
    }
    else{
        for(loop =1;loop<=num;loop++){
            result = result*loop;
        }
        printf("%d! = %10d",num,result);
    }
}*/

int refactorial (int value){
    if (value<=1) return 1;
    else return value*refactorial(value-1);
}

int main () {
    int fac;
    while(1){
        printf("Enter the factorial number: ");
        scanf("%d",&fac);
        if(fac < 0){
            printf("Error Please input again\n");    
        }
        else break;
    }
    printf("%d! = %d",fac,refactorial(fac));
}