#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand ( time(NULL) );
    int value[100],i,max=0,maxid,min=50,minid;
    for(i = 0;i<100;i++){
        value[i] = rand() % 50 + 1;
        if(i%10==0) printf("\n");
        printf("%d ",value[i]);
    }
    printf("\n");
    for(i=0;i<100;i++){
        if(max<value[i]) {
            max=value[i];
            maxid = i;
        }
        if(min>value[i]){
            min=value[i];
            minid = i;
        }
    }
    printf("MAX: %d @%d\n MIN: %d @%d",max,maxid,min,minid);
}