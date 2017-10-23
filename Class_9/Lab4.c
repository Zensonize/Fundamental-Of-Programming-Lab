#include <stdio.h>
int getC(int A, int B, int size){
    if(B==size-1) return A+1;
    else return A;
}

int getD(int A, int B,int C, int size){
    if(C!=A) return 0;
    else return B+1;
}

int main() {
    int N,K;
    scanf("%d %d",&N,&K);
    int array[N][N];
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&array[i][j]);
        }
    }

    int a,b,c,d,e,f,sum,count=0;
    for(a=0;a<N;a++){
        for(b=0;b<N;b++){
            c = getC(a,b,N);
            for(c;c<N;c++){
                d = getD(a,b,c,N);
                for(d;d<N;d++){
                    e = getC(c,d,N);
                    for(e;e<N;e++){
                        f = getD(c,d,e,N);
                        for(f;f<N;f++){
                            sum = array[a][b]+array[c][d]+array[e][f];
                            if(sum%K==0) count++;
                        }
                    }
                }
            }
            
        }
    }
    printf("DUMMY = %d\n",count);
}