#include <stdio.h>

int main() {
    int i=100;
    while(i>=1){
        printf("%d ",i);
        i-=10;
        if(i==0) i+=1;
    }
    return 0;
}