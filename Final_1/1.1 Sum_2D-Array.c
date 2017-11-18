#include <stdio.h>
int main (){
    int x,y;
    int i,j;
    scanf("%d %d",&y,&x);
    double data[y][x];
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            scanf("%lf",&data[i][j]);
        }
    }

    char choice;
    int pos;
    double ave=0;
    scanf(" %c",&choice);
    scanf("%d",&pos);
    switch(choice){
        case 'r':
            for(i=0;i<x;i++){
                ave += data[pos-1][i];
            }
            printf("%.2f",ave);
            break;
        case 'c':
            for(i=0;i<y;i++){
                ave += data[i][pos-1];
            }
            printf("%.2f",ave);
            break;
    }
}