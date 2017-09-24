#include <stdio.h>

int main () {
    int player,games,i,j,data;
    double sum;
    scanf("%d %d",&player,&games);    
    for(i=1;i<=player;i++){
        sum = 0;
        printf("Player %d \n",i);
        for(j=1;j<=games;j++){
            printf("Enter score %d : ",j);
            scanf("%d",&data);
            sum = sum + data;
        }
        sum=sum/games;
        printf("Average score: %f\n",sum);
    }
    return 0;
}