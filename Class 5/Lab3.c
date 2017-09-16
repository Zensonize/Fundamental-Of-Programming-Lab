#include <stdio.h>

int main() {
    int i;
    for (i=0;i<9;i++){
        printf("Distance for %2.1f hours is %-3.2f \n",i*0.5,i*30.0);
    }
    return 0;
}