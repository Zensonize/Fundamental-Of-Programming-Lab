#include <stdio.h>

int main() {
    double array[4][4];
    int i,j;
    double maxy[4],minx[4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%lf",&array[i][j]);
            if(j == 0){
                maxy[i] = array[i][j];
            }
            if(maxy[i] < array[i][j]) maxy[i] = array[i][j];
            if(i == 0){
                minx[j] = array[i][j];
            }
            if(minx[j] > array[i][j]) minx[j] = array[i][j];
        }
    }
    for(i=0;i<4;i++){
        printf("Row: %f\n",maxy[i]);
    }
    for(i=0;i<4;i++){
        printf("Cloumn: %f\n",minx[i]);
    }
}