#include <stdio.h>

void secs(int hr,int min,int sec,int *totsec_pointer){
    int sum;
    sum = 3600*hr + 60*min + sec;
    *totsec_pointer = sum;
}

int main() {
    int HR,MIN,SEC,totsec;
    scanf("%d %d %d",&HR,&MIN,&SEC);
    secs(HR,MIN,SEC,&totsec);
    printf("%d",totsec);
}