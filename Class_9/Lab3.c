#include <stdio.h>
int main() {
    int Y,X,i,j,issym=4;
    scanf("%d %d",&Y,&X);
    int array[Y][X];
    if(X!=Y) printf("Symmetric matrix must be a square matrix");
    else{
        for(i=0;i<Y;i++){
            for(j=0;j<X;j++){
                printf("Enter element %d,%d: ",i+1,j+1);
                scanf("%d",&array[i][j]);
            }
        }

        for(i=0;i<Y;i++){
            for(j=0;j<X;j++){
                if(array[i][j] != array[j][i]) {
                    printf("Ther matrix is not a symmetric\n");
                    issym =0;
                    break;
                }
            }
            if(issym==0) break;
        }
    }
}