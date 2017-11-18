#include <stdio.h>

void warshall(int b[20][20],int size){
    int i,j,k;
    int wsrow[size],wscol[size];
    int wsrow_ptr,wscol_ptr;
    for(i=0;i<size;i++){
        wsrow_ptr = 0;
        wscol_ptr = 0;
        for(j=0;j<size;j++){
            if(b[i][j] == 1) {
                wsrow[wsrow_ptr] = j;
                wsrow_ptr++;
            }
            if(b[j][i] == 1) {
                wscol[wscol_ptr] = j;
                wscol_ptr++;
            }
        }
        for(j=0;j<wsrow_ptr;j++){
            for(k=0;k<wscol_ptr;k++){
                b[wsrow[j]][wscol[k]] = 1;
            }
        }
    }
}

int main(){
    int size,edge;
    int n,m;
    int i,j;
    scanf("%d %d",&size,&edge);
    int a[20][20];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            a[i][j] = 0;
        }
    }
    for(i = 0;i<edge;i++){
        scanf("%d %d",&n,&m);
        n -=1;
        m -=1;
        a[n][m] = 1;
        a[m][n] = 1;
        a[n][n] = 1;
        a[m][m] = 1;
    }
    /*printf("\nBEFORE\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/
    warshall(a,size);
    /*printf("\nAFTER\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/
    scanf("%d %d",&n,&m);
    if (a[n-1][m-1] == 1) printf("Yes");
    else printf("No");
}