#include <stdio.h>
int main() {
    int price[11],quantity[11],amount[11],i;
    for(i=0;i<10;i++){
        scanf("%d %d",&price[i],&quantity[i]);
        amount[i] = price[i]*quantity[i];
    }
    if(price[11] != NULL){
        printf("ERROR");
    }
    else{
        printf("Price\t|\tQuantity\t|\tValue\n");
        for(i=0;i<10;i++){
            printf("  %d\t|\t   %d\t\t|\t   %d\n",price[i],quantity[i],amount[i]);
        }
    }
}