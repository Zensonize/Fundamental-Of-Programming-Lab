#include <stdio.h>

int main() {
    int i;
    for (i=0;i<=20;i++){
        if(i==0)printf("1 ");
        else printf("%d ",i*5);
    }
    return 0;
}