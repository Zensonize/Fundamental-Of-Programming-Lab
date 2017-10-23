#include <stdio.h>

int main() {
    int size;
    char data;
    scanf("%d %c",&size,&data);
    char array[size][size];
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i==0 || i== size-1 || j== size-(i+1)) array[i][j] = data;
            else array[i][j] = ' ';
            printf("%c",array[i][j]);
        }
        printf("\n");
    }
}