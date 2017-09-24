#include <stdio.h>

int main(){
    int stnum,ennum,incre;
    printf("Starting number: ");
    scanf("%d",&stnum);
    printf("Stopping number: ");
    scanf("%d",&ennum);
    printf("Increment: ");
    scanf("%d",&incre);
    do{
        printf("%d ",stnum);
        stnum = stnum+incre;
    }while(stnum<=ennum);
}