#include <stdio.h>

int secs(int hr,int min,int sec){
    int sum;
    sum = 3600*hr + 60*min + sec;
    return sum;
}
int main() {
    int HR,MIN,SEC,totsec;
    scanf("%d %d %d",&HR,&MIN,&SEC);
    totsec = secs(HR,MIN,SEC);
    printf("%d",totsec);
}