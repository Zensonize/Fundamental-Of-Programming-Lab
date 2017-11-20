#include <stdio.h>
#include <string.h>

int main(){
    char abc[] = "When the going gets tough, the tough stay put!";
    char check[20];
    int count = 0;
    scanf("%[^\n]",check);
    int i,j,iscorr;
    /*for(i=0;i<strlen(abc);i++){
        if(check[i] <= 'Z') check[i] += 22;
    }*/
    for(i = 0;i<strlen(abc);i++){
        iscorr = 1;
        for(j = 0;j<strlen(check);j++){
            if(abc[i+j] != check[j]) iscorr = 0;
            //printf("compare %c|%c iscorr == %d",abc[i+j],check[j],iscorr);
            if(iscorr == 0) break;
        }
        //printf("\n");
        if(iscorr == 1)count ++;
    }
    printf("%d",count);
}