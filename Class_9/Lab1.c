#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int i,j,array[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            array[i][j] = rand()%10;
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n%d",array[2][3]);
}