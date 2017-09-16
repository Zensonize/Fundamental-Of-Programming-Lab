#include <stdio.h>

int main() {
    int num[5];
    int i=0,j;
    char c;
    printf("Enter 5 numbers: ");
    int b=0;
    for (i=0;i<5;i++){
        scanf(" %d",&num[i]);
    }
    while (c = (getchar()!= EOF)){
    }

    for(i=0;i<5;i++){
        //scanf("%d",&num);
        printf("%2d | ",num[i]);
        for (j=0;j<num[i];j++){
            printf("*");
        }
        printf("\n");
    }    
    return 0;
}