#include <stdio.h>

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
}

int main () {
    int fac;
    while(1){
        scanf("%d",&fac);
        if(fac < 0){
            printf("Error Please input again\n");    
        }
        else break;
    }
    factorial(fac);
}