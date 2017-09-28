#include <stdio.h>

int main() {
    int i=90;
    while(i>=0){
        if(i%50== 0 && i!=0) {
            i-=10;
            continue;
        }
        printf("%d ",i);
        i-=10;
    }
    return 0;
}