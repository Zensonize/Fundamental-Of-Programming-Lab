#include <stdio.h>

int main() {
    int num[5];
    int i=0,j;
    char c;
    printf("Enter 5 numbers: ");
    int b=0;
    for (i=0;i<5;i++){
        scanf(" %d",&num[i]);
        if(num[i]>30 || num[i]<1){
            printf("%d value is Invalid",i+1);
            goto END;
        }
    }
    while (c = (getchar()!= EOF)){
    }

    for(i=0;i<5;i++){
        printf("%2d | ",num[i]);
        for (j=0;j<num[i];j++){
            if(j>0 && j%5 == 0) printf(" ");
            printf("*");
        }
        printf("\n");
    }    
    END: return 0;
}