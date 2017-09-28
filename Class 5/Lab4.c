#include <stdio.h>
int num[99];
int main() {
    
    int i,j,k=0;
    int c;
    printf("Enter 5 numbers: ");
    while (scanf("%d",&c) != EOF){
        num[k] = c;
        if(num[k]>30 || num[k]<1){
            printf("%d value is Invalid",k+1);
            goto END;
        }
        k++;
    }
    for(i=0;i<k;i++){
        printf("%2d | ",num[i]);
        for (j=0;j<num[i];j++){
            if(j>0 && j%5 == 0) printf(" ");
            printf("*");
        }
        printf("\n");
    }    
    END: return 0;
}